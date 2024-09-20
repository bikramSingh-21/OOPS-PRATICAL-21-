#include <iostream>
using namespace std;

class complex{
int real;
int imaginary;

public:

// Constructors 

complex(){
}

complex(int real , int imaginary){
this->real = real; 
this->imaginary = imaginary; 
}


//Operator Overloading +,-,=

complex operator +(complex b){
complex d;
d.real = real + b.real;
d.imaginary = imaginary + b.imaginary;
return d;
}

complex operator -(complex b){
complex d;
d.real = real - b.real;
d.imaginary = imaginary - b.imaginary;
return d;
}

bool operator == (complex b){
    return (real  == b.real && imaginary == b.imaginary);
}

void show() {
        cout << real << " + " << imaginary << "i" << endl;
    }

};

int main(){
    complex a(5,4);
    complex b(5,4);
    complex s;
    complex k;
    s= a+b;
    k = a-b;
    cout<<"Sum of the complex Number is  : ";
    s.show();

    cout<<"Differrence of the complex Number is  :";
    k.show();

    if(a==b){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}