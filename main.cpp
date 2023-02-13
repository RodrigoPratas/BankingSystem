//
// Created by rodrigo on 2/13/23.
//

#include "cstdio"
#include "iostream"
#include "string"
using namespace std;

int main(){

}

class user{
public:
    string firstName, lastName;
    float balance;
    int accNumber;

    void deposit();
    void withdraw();
    void balanceCheck();
    void printSummary();

    void setfirstName(firstName);
    void setlastName(lastName);
    void setbalance(balance);
    void setaccNumber(accNumber);

};

struct Bank{

    void showMenu(){
        cout << "            MENU         " << endl;
        cout << "-------------------------" << endl;
        cout << " | Open New Account (1) |" << endl;
        cout << " | Deposit Money    (2) |" << endl;
        cout << " | WithDraw Money   (3) |" << endl;
        cout << " | Display Account  (4) |" << endl;
        cout << " | Exit             (5) |" << endl;
        cout << "-------------------------" << endl;
    }

    void openAccount(){

        cout << "/**************************\ " << endl;
        cout << "/*    Creating Acoount    *\ " << endl;
        cout << "/**************************\ " << endl << endl;


    };
};

