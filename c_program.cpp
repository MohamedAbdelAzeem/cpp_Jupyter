
#include <iostream>
using namespace std;

// Class that uses this pointer
class car{
  public:
    int a;
    car(int a) {

        // Assigning a of this object to
        // function argument a
        this->a = a;
    }
    
    void foo(const car& obj)
    {
        cout << "FOO" << endl;
        
    }
    void display() {

        // Accessing a of this object
        cout << "Value: " << this->a << endl;
        
        // We can use "this" to pass the object to another member function that takes an object argument
        //this is a pointer we need to dereference it.
        foo(*this);
    }
};

int main() {

    // Checking if this works for the object
    car o(10);
    o.display();

    return 0;
}
