/*  Create a Base class that consists of private, protected and public data members and member functions. Try using different access modifiers for inheriting Base class to the Derived class and create a table that summarizes the above three modes (when derived in public, protected and private modes) and shows the access specifier of the members of base class in the Derived class.  */

#include <iostream>
using namespace std;

class Base {
private:
    int privateVar;
    void privateFunc() {
        cout << "Private function of Base class" << endl;
    }

protected:
    int protectedVar;
    void protectedFunc() {
        cout << "Protected function of Base class" << endl;
    }

public:
    int publicVar;
    void publicFunc() {
        cout << "Public function of Base class" << endl;
    }
};

// Public inheritance
class DerivedPublic : public Base {
public:
    void display() {
        // privateVar and privateFunc() are not accessible here
        // protectedVar and protectedFunc() remain protected
        cout << "Accessing in DerivedPublic: " << endl;
        protectedFunc();  // Allowed (protected)
        publicFunc();     // Allowed (public)
    }
};

// Protected inheritance
class DerivedProtected : protected Base {
public:
    void display() {
        // privateVar and privateFunc() are not accessible here
        // protectedVar and protectedFunc() remain protected
        cout << "Accessing in DerivedProtected: " << endl;
        protectedFunc();  // Allowed (protected)
        publicFunc();     // Now protected in DerivedProtected
    }
};

// Private inheritance
class DerivedPrivate : private Base {
public:
    void display() {
        // privateVar and privateFunc() are not accessible here
        // protectedVar and protectedFunc() become private
        cout << "Accessing in DerivedPrivate: " << endl;
        protectedFunc();  // Allowed (private now)
        publicFunc();     // Now private in DerivedPrivate
    }
};

int main() {
    DerivedPublic objPublic;
    DerivedProtected objProtected;
    DerivedPrivate objPrivate;

    cout << "In DerivedPublic: " << endl;
    objPublic.display();
    objPublic.publicFunc();  // Can access public functions

    cout << "\nIn DerivedProtected: " << endl;
    objProtected.display();
    // objProtected.publicFunc();  // Not accessible (now protected)

    cout << "\nIn DerivedPrivate: " << endl;
    objPrivate.display();
    // objPrivate.publicFunc();  // Not accessible (now private)

    return 0;
}
