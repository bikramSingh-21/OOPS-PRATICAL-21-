/*  Create a Base class that consists of private, protected and public data members and member functions. Try using different access modifiers for inheriting Base class to the Derived class and create a table that summarizes the above three modes (when derived in public, protected and private modes) and shows the access specifier of the members of base class in the Derived class.  */

#include <iostream>
using namespace std;

class Base {
private:
    int privateVar;
    int var1;
    public:
    void setVar1(int var1){
        this->var1 = var1;
    }

protected:
    int protectedVar;
    public:
    int var2;
    void setVar2(int var2){
        this->var2 = var2;
    }

public:

    int publicVar;
    int var3;
    void setVar3(int var3){
        this->var3 = var3;
    }
};

// Public inheritance
class DerivedPublic : public Base {
public:
  
};

// Protected inheritance
class DerivedProtected : protected Base {
public:
    void display() {}
  
};

// Private inheritance
class DerivedPrivate : private Base {
public:
   
};

int main() {
    
}
