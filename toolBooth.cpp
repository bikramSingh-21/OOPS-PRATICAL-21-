/*Imagine a tollbooth with a class called TollBooth. The two data items are of type unsigned int and double to hold the total number of cars and total amount of money collected. A constructor initializes both of these data members to 0. A member function called payingCar( )increments the car total and adds 0.5 to the cash total. Another function called nonPayCar( ) increments the car total but adds nothing to the cash total. Finally a member function called display( )shows the two totals. Include a program to test this class. This program should allow the user to push one key to count a paying car and another to count a non paying car. Pushing the ESC key should cause the program to print out the total number of cars and total cash andthen exit. */

#include <iostream>
using namespace std;
class toolbooth{
    unsigned int totalCars;
    double moneyCollected;
    public:
    toolbooth(unsigned int totalCars,double moneyCollected){
        this->totalCars = totalCars;
        this->moneyCollected = moneyCollected;
    }

    void payingCar(){
        totalCars++;
        moneyCollected+=0.5;
    }

    void nonPayingCar(){
        totalCars++;
        moneyCollected+=0;
    }

    void display(){
        cout<<"Total Numbers of Cars are: "<<totalCars<<endl;
        cout<<"Money Collected from Tool Booths are : "<<moneyCollected<<endl;
    }

};
int main(){
 toolbooth d1(0,0);
 cout<<"Enter the 0 to exit through loop . Press 1 for Paying Cars and Press 2 for Non-Paying Car"<<endl;   
 int x;
 while(x!=0){
 cin>>x;
 switch(x){
    case 0:
    break;
    case 1:
    d1.payingCar();
    break;
    case2:
    d1.nonPayingCar();
    break;
 }
 }

 d1.display();


}