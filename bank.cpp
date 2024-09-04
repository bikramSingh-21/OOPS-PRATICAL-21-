/* Q Implement a C++ program by defining a class to represent a bank account. The class should include data members for the name of the 
depositor, the account number, the type of account (such as Savings or Current), and the balance amount in the account. The class should 
also have member functions to assign initial values to these data members, deposit an amount into the account, withdraw an amount after 
checking the balance to ensure sufficient funds are available, and display the depositor's name along with the current balance. */


#include <iostream>
using namespace std;

class sbiBank {
    string Name;
    int accNum;
    string acctype;
    float amount;

public:
    
    void enter_Value(string name, string acntty, int accnu, float am) {
        Name = name;
        acctype = acntty;
        accNum = accnu;
        amount = am;
    }

    // Function to deposit an amount
    void deposit(int y) {
        amount += y;
    }

    // Function to withdraw an amount
    void withdraw(int y) {
        amount -= y;
    }

    // Function to perform deposit/withdrawal and display details
    void checkout(int x, int y) {
        if (x == 1) {
            deposit(y);
        } else {
            if (amount >= y) {
                withdraw(y);
            } else {
                cout << "UNABLE TO WITHDRAW MONEY " << endl;
                cout << "LOW BALANCE" << endl;
            }
        }

        // Display account details
        cout << "Name : " << Name << endl;
        cout << "AccNumber : " << accNum << endl;
        cout << "AccType : " << acctype << endl;
        cout << "Amount : " << amount << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of customers: ";
    cin >> n;
    
    sbiBank op[n];
    string name, acctype;
    int accNum;
    float am;
    int x, y;

    for (int i = 0; i < n; i++) {
        cout << "Enter the details of customer " << (i + 1) << ":\n";
        
        cout << "Enter the Name of the Customer: ";
        cin >> name;
        
        cout << "Enter the Account Number of the Customer: ";
        cin >> accNum;
        
        cout << "Enter the Account Type of the Customer: ";
        cin >> acctype;
        
        cout << "Enter the Initial Amount of the Customer: ";
        cin >> am;

        op[i].enter_Value(name, acctype, accNum, am);

        cout << "Enter 0 for Withdrawal and 1 for Deposit: ";
        cin >> x;
        
        cout << "Enter the Amount: ";
        cin >> y;
        
        op[i].checkout(x, y);
        cout << endl;
    }

  

    return 0;
}
