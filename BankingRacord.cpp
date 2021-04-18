// BankingRacord.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <ctime>
#include <stdlib.h>
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
    srand(time(0));
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
    int id = rand() % 1000 + 1;
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
        customers.push_back(Customer(id, fName, lName, DOB, startingBal));
    }
    else {
        customers.push_back(Customer(id, fName, lName, DOB));
    }
    cout << "Adding a new account" << endl;
}

void showAllAccounts() {
    int index = 0;
    for (Customer i : customers) {
        cout << index << ". " << i.toString() << endl;
        index++;
    }
}

void deleteAccount() {
    int index = 0;
    showAllAccounts();
    cout << "Enter the index of the customer to delete: ";
    cin >> index;
    customers.erase(customers.begin() + index);
    cout << "deleting account" << endl;
}

void updateAccount() {
    int index = 0;
    showAllAccounts();
    cout << "Enter the index of the customer to update: ";
    cin >> index;
    cout << "updating account" << endl;
}

void login() {
    cout << "Login" << endl;
}
