/*Construct a Program in C++ to show the working of function overloading(compile time polymorphism) by using a function named calculate Area () to calculate area of square, rectangle and triangle using different signatures as required.*/


#include <iostream>
using namespace std;

class areaCal{
    int x,y,z;
    public:

    // Function Overloading;

    int calculateArea(int x){  // Square
        return x*x;
    }

    int calculateArea(int x,int y){  // Rectangle
        return x*y;
    }

    float calculateArea(float y,float z){  // Triangle
        return (0.5)*y*z;
    }

};


int main(){
    int length,breadth,height;
    cout<<"Enter the Length : ";
    cin>>length;
    cout<<"Enter the breadth : ";
    cin>>breadth;
    cout<<"Enter the Height : ";
    cin>>height;
    // Declare Object
    areaCal d1;

    cout<<"Press 1 for Calculating Squares Area"<<endl;
    cout<<"Press 2 for Calculating Rectangle Area"<<endl;
    cout<<"Press 3 for Calculating Triangle Area"<<endl;
    int press;
    cin>>press;

    switch(press){
        case 1 :
        cout<<d1.calculateArea(length)<<endl;
        break;
        case 2 :
        cout<<d1.calculateArea(length,breadth)<<endl;
        break;
        case 3:
        cout<<d1.calculateArea(breadth*(1.0f),height*(1.0f))<<endl;
        break;
        default : 
        cout<<"Not valid";
    }

}