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
    cout << "Adding a new account" << endl;
}

void showAllAccounts() {
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
