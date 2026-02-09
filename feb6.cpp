// C++ Program to demonstrate static data members
#include <iostream>
using namespace std;

// class definition
class A {
public:
    static int x;  // static data member
  static int y;
  
    A() {
        cout << "A's constructor called" << endl;
      x++;
      y++;
     
    }
  void display(){
    cout<<"hello";
    x++;
    y++;
  }
};



// definition and initialization of static data member
int A::x;
int A::y=0;
int main() {
    // accessing static data member using scope resolution operator
  A obj;
  A obj1;
  A obj2;
  A obj3;
  A obj4;
  A obj5;
  A obj6;
  
    obj.display();
  obj.display();
  obj.display();
  obj.display();
  obj.display();
  obj.display();
    cout << "Accessing static data member: " << A::x << endl;
  
    cout << "Accessing static data member: " << A::x << endl;

    cout << "Accessing static data member: " << A::y << endl;
  
   
    return 0;
}