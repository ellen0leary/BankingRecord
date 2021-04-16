#ifndef customer_hpp
#define customer_hpp

#include <string>
#include <ctime>
using namespace std;

class Customer
{
private:
	string mFirstName;
	string mLastName;
	string mDateOfBirth;
	int mbalance;
public:
	Customer(string first_name, string last_name, string dob, int balence=0);
	bool updateBalance(int val, int ifAdding);
	bool updateCustomer(string newVal, int ifFirstName);
	bool updateCustomer(string newDate);
	void createStandingOrder();
};

#endif /*customer_hpp*/