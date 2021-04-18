#include "Customer.h"

Customer::Customer(string first_name, string last_name, string dob, int balance):
	mFirstName(first_name),
	mLastName(last_name) ,
	mDateOfBirth(dob),
	mbalance(balance)
{};

bool Customer::updateBalance(int val, int ifAdding) {
	if (ifAdding) {
		mbalance += val;
		return true;
	}
	else {
		if (mbalance - val >= 0) {
			mbalance -= val;
			return true;
		}
		return false;
	}
	return false;
}

bool Customer::updateCustomer(string newVal, int ifFirstName) {
	return true;
}

bool Customer::updateCustomer(string newDate) {
	return false;
}

void Customer::createStandingOrder() {

}

string Customer::toString() {
	return  "Name: " + mFirstName + " " + mLastName + ", Date Of Birth: " + mDateOfBirth + ", balance: " + to_string(mbalance) + ".";
}