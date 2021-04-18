#ifndef customer_hpp
#define customer_hpp

#include <string>
using namespace std;

class Customer
{
private:
	string mFirstName;
	string mLastName;
	string mDateOfBirth;
	int mID;
	int mbalance;
public:
	Customer(int id, string first_name, string last_name, string dob, int balence=0);
	bool updateBalance(int val, int ifAdding);
	bool updateCustomer(string newVal, int ifFirstName);
	string getFirstName();
	bool setFirstName(string first_name);
	string getLastName();
	bool setLastName(string last_name);
	string getDOB();
	bool setDOB(string dob);
	void createStandingOrder();
	string toString();
};

#endif /*customer_hpp*/