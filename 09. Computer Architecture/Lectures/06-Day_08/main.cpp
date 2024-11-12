#include <iostream>
#include <string>

using namespace std;

// Base class
class Parent {
public:
  virtual void print() { cout << "Parent's print called..." << endl; }
};

// Derived Class 1
class Son : public Parent {
public:
  void print() { cout << "Son's print called..." << endl; }
  void print(string name) { cout << name << " print called..." << endl; }
};

// Derived Class 2
class Daughter : public Parent {
public:
  void print() { cout << "Daughter's print called..." << endl; }
};

int main() {

  Parent *P;  // Pointer to a base class type
  Son S;      // Instance of derived class 1
  Daughter D; // Instance of derived class 2

  // Without using pointers, the "virtual" keyword doesn't
  // effect which method gets called. So the following two
  // calls to print will work as expected. This is an example
  // of `compile time polymorphism`

  cout << endl;

  S.print("Arnold");
  D.print();

  cout << endl << "===================================" << endl << endl;


}
