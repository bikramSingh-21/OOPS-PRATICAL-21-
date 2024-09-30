/*Using the concept of operator overloading. Implement a program to overload  the following:
a. Unary –
b. Unary ++ preincrement, postincrement
c. Unary -- predecrement, postdecrement
*/


#include <iostream>
using namespace std;
class overLoading{
int x;
int y;

public:
overLoading(){ }

overLoading(int x ,int y){ 
this->x = x;
this->y = y;
}
// ++ Operator

// void operator ++(){
//     x+=1;
//     y+=1;
// }
// void operator ++(int noUse){
//     x+=1;
//     y+=1;
// }

// -- Operator

// void operator --(){
//     x-=1;
//     y-=1;
// }



void operator --(int noUse){
    x-=1;
    y-=1;
}

void show(){
    cout<<x<<" "<<y;
    cout<<endl;
}

friend void operator ++(overLoading &d);
friend void operator ++(overLoading &d,int noUse);
friend void operator --(overLoading &d);
friend void operator --(overLoading &d,int noUse);

};

void operator ++(overLoading &d){
++(d.x);
++(d.y);
}

void operator --(overLoading &d){
--(d.x);
--(d.y);
}

void operator ++(overLoading &d, int noUSe){
++(d.x);
++(d.y);
}

void operator --(overLoading &d, int noUse){
--(d.x);
--(d.y);
}



int main(){

overLoading d1(5,8);

++d1;
d1.show();
--d1;
d1.show();
d1++;
d1.show();
--d1;
d1.show();

}


