#include "Customer.h"

Customer::Customer(int id, string first_name, string last_name, string dob, int balance):
	mID(id),
	mFirstName(first_name),
	mLastName(last_name) ,
	mDateOfBirth(dob),
	mbalance(balance)
{
	if (first_name.size() < 20)mFirstName = first_name;
	else mFirstName = first_name.substr(0, 20);

	if (last_name.size() < 20) mLastName = last_name;
	else mLastName = last_name.substr(0, 20);

};

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

bool Customer::setFirstName(string first_name) {
	mFirstName = first_name;
	return true;
}

bool Customer::setLastName(string last_name) {
	mLastName = last_name;
	return true;
}

bool Customer::setDOB(string dob) {
	mDateOfBirth = dob;
	return true;
}
void Customer::createStandingOrder() {

}

string Customer::toString() {
	return  "Name: " + mFirstName + " " + mLastName + ", Date Of Birth: " + mDateOfBirth + ", balance: " + to_string(mbalance) +" ID"+ to_string(mID) +".";
}