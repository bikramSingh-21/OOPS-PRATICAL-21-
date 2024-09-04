/* Q Define a class named Hotel in C++ with the following specifications. The class should have private members: Rno to store the room number, Name to store the customer’s name, Tariff to store the per day charges, and NOD to store the number of days of stay. Additionally, it should have a private member function CALC() to calculate and return the total amount as NOD * Tariff. If the value of NOD * Tariff exceeds 10,000, the total amount should be calculated as 1.05 * NOD * Tariff. The public members of the class should include a function Checkin() to input the details for Rno, Name, Tariff, and NOD, and a function Checkout() to display the values of Rno, Name, Tariff, NOD, and the calculated amount (by calling the CALC() function).  */

#include <iostream>
using namespace std;

// Hotel Class 
class hotel
{
    int Rno;
    string Name;
    float amount;
    int tarrif;
    int DOS;

public:

    void checkIn(int room , string name , int tar ,int date){
      Rno = room;
      Name = name;
      tarrif = tar;
      DOS = date;
    }
     
  

    void checkout()
    {
        calc();
        cout << "Room Number : " << Rno << endl;
        cout << "Name : " << Name << endl;
        cout << "Tarrif : " << tarrif << endl;
        cout << "DOS : " << DOS << endl;
        cout << "Amount : " << amount << endl;
    }

    void calc()
    {
        amount = DOS*tarrif;
        if(amount > 10000) {
           amount*=1.05;
        }

    }
};

int main()
{
    int n;
    cout<<"Enter the number of customers  : ";
    cin>>n;
    hotel op[n];
    string name;
    int room , tar , date;
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<(i+1)<<" customer detail : "<<endl;
        cout<<"Enter the Name of the Customer : ";
        cin >> name;
        cout<<"Enter the RoomNo of the Customer : ";
        cin >> room;
        cout<<"Enter the Tarrif of the Customer : ";
        cin >> tar;
        cout<<"Enter the Days of stay of the Customer : ";
        cin >> date;
        op[i].checkIn(room,name,tar,date);
        cout<<endl;
       
    }
   cout<<"Details of customers are : "<<endl;

   for(int i=0;i<n;i++){
     op[i].checkout();
     cout<<endl;
     cout<<endl;
   }
   
   
}