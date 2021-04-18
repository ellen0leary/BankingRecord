// BankingRacord.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Customer.h"
using namespace std;

void menu();
void addNewAccount();
void showAllAccounts();
void deleteAccount();
void updateAccount();
void login();

vector<Customer> customers;
int main()
{
    //vector<Customer>& allCustomers = customers;
    menu();
}

void menu() {
    int option = 0;
    while (option != -1) {
        cout << endl;
        cout << "Choose an option" << endl;
        cout << "-----------------------" << endl;
        cout << "1- Add a new account" << endl;
        cout << "2- Show all accounts" << endl;
        cout << "3- Delete account" << endl;
        cout << "4- Update account" << endl;
        cout << "5- Login" << endl;
        cout << "-1 - Exit" << endl;
        cin >> option;

        switch (option) {
        case(1):
            addNewAccount();
            break;
        case(2):
            showAllAccounts();
            break;
        case (3):
            deleteAccount();
            break;
        case (4):
            updateAccount();
            break;
        case (5):
            login();
            break;
        default:
            cout << "Enter another value" <<endl;
            break;
        }
    }
}

void addNewAccount(){
    string fName, lName, DOB, ifStartingBal;
    int startingBal;
    cout << "Enter First Name: ";
    cin >> fName;
    cout << "\nEnter Last Name: ";
    cin >> lName;
    cout << "\nEnter Date Of Birth (dd/mm/yyyy): ";
    cin >> DOB;
    cout << "\nWould you like to start with a balance? (y/n): ";
    cin >> ifStartingBal;

    if (ifStartingBal == "y" || ifStartingBal == "yes") {
        cout << "Enter Starting Balance: ";
        cin >> startingBal;
        customers.push_back(Customer(fName, lName, DOB, startingBal));
    }
    else {
        customers.push_back(Customer(fName, lName, DOB));
    }
    cout << "Adding a new account" << endl;
}

void showAllAccounts() {
    for (Customer i : customers) {
        cout << i.toString() << endl;
    }
    cout << "Displaying all accounts" << endl;
}

void deleteAccount() {
    cout << "deleting account" << endl;
}

void updateAccount() {
    cout << "updating account" << endl;
}

void login() {
    cout << "Login" << endl;
}
