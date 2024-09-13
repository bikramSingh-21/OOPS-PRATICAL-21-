/*Create class SavingsAccount. Use a static variable annualInterestRate to store the annual interest rate for all account holders. Each object of the class contains a private instance variable savingsBalance indicating the amount the saver currently has on deposit. Provide methodFor batches admitted in 2023-24 and 2024-25 onwards, Applicable from Academic Session 2024-25 calculateMonthlyInterest() to calculate the monthly interest by multiplying the savingsBalance by annualInterestRate divided by 12.This interest should be added tosavingsBalance. Provide a static method modifyInterestRate() that sets the annualInterestRate to a new value. Write a program to test class SavingsAccount. Instantiate two savingsAccount objects, saver1 and saver2, with balances of Rs2000.00 and Rs3000.00, respectively. Set annualInterestRate to 4%, then calculate the monthly interest and print the new balances for both savers. Then set the annualInterestRate to 5%, calculate the next month’s interest and print the
new balances for both savers*/


#include <iostream>
using namespace std;
class SavingsAccount{
    private:
    float savingBalance;
    static float annualIntrestRate;  // Static Variable
    public:
    SavingsAccount(int savingBalance){
        this->savingBalance = savingBalance;
    }
    void calculateMonthlyInterest(){
       float intrest =  (savingBalance*annualIntrestRate)/12;
       float newBalance = intrest + savingBalance;
       cout<<"Balance = "<<newBalance;
    }


    static void modifyInterestRate(float newIntrestRate){    // Static Function
        annualIntrestRate = newIntrestRate/100;
    }

};

float SavingsAccount::annualIntrestRate = 0.04;   // Static declaration

int main(){

    float intrestRate;
    cout<<"Enter the Suitable Intrest Rate: ";
    cin>>intrestRate;
    SavingsAccount::modifyInterestRate(intrestRate);

    SavingsAccount saver1(2000) , saver2(3000);
    saver1.calculateMonthlyInterest();
    cout<<endl;
    saver2.calculateMonthlyInterest();
  

}

