/*Create a class called Time that has separate int member data for hours, minutes and seconds. One constructor should initialize this data to 0, and another should initialize it to fixed values. A member function should display it in 11:59:59 format. A member function named add() should add two objects of type time passed as arguments. A main ( ) program should create two initialized values together, leaving the result in the third time variable.Finally it should display the value of this third variable.*/


#include <iostream>
using namespace std;
class time{
    private:
    int hour;
    int minute;
    int second;
    public:


    time (){
        this->hour = 0;
        this->minute = 0;
        this->second = 0;
    }

    time (int hour,int minute,int second){
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

 void add(time t1, time t2) {
        second = t1.second + t2.second; // 31 + 31 = 62
        second = second % 60;   // 62%60 = 2

        minute = t1.minute + t2.minute + (t1.second + t2.second) / 60; // 31+31 = 62 + 1 = 63 
        minute = minute % 60;   // 3

        hour = t1.hour + t2.hour + (t1.minute + t2.minute + (t1.second + t2.second) / 60) / 60;  // 22 + (62 + 63)
        hour = hour % 24;  

    }

    
    void display() {
        cout << hour << ":" << minute << ":" << second << endl;
    }
};

int main() {
    time d1(11,31,31), d2(11,31,31), result;

    
    result.add(d1, d2);

    
    result.display();

    return 0;
}