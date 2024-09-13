/*Create a class called Time that has separate int member data for hours, minutes and seconds. One constructor should initialize this data to 0, and another should initialize it to fixed values. A member function should display it in 11:59:59 format. A member function named add() should add two objects of type time passed as arguments. A main ( ) program should create two initialized values together, leaving the result in the third time variable.Finally it should display the value of this third variable.*/

#include <iostream>
using namespace std;
class time
{
private:
    int hour;
    int minute;
    int second;

public:
    //Constructors 

    time()
    {
        this->hour = 0;
        this->minute = 0;
        this->second = 0;
    }

    time(int hour, int minute, int second)
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

    // Additing Two times

    void add(time t1, time t2)
    {
        second = t1.second + t2.second; // 31 + 31 = 62
        second = second % 60;           // 62%60 = 2

        minute = t1.minute + t2.minute + (t1.second + t2.second) / 60; 
        minute = minute % 60;                                          

        hour = t1.hour + t2.hour + (t1.minute + t2.minute + (t1.second + t2.second) / 60) / 60; 
        hour = hour % 60;
    }

    // Display function
    void display()
    {
        cout << hour << ":" << minute << ":" << second << endl;
    }
};

int main()
{
    time d1(13, 43, 62), d2(11, 42, 63), result;
    result.add(d1, d2);
    result.display();
    return 0;
}