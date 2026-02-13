// Write a program where a class RobotSystem uses a 
// static data member to count how many 
// robot objects have called a start() function.
// Print total count.
















// Write a C++ program to define a class Number with:
// • one integer data member
// • a default constructor that sets the value to 0
// • a function to display the value


// #include<iostream>
// class number{
//     private:
//     int data;
//     public:
//     number(){
//         data=0;
//     }
//     void display(){
//         std::cout<<data<<std::endl;
//     }
//     number(int a)
//     ~number(){

//     }
// };

// int main()
// {
//     number obj;
//     obj.display();
//     return 0;
// }











// Write a program where:
// • one object is created using default constructor
// • another object is created using parameterized constructor
// • print values of both objects


// // #include<iostream>
// // #include<algorithm>
// // class number{
// //     private:
// //     int data;
// //     public:
// //     number(){
// //         data=0;
// //         std::cout<<data;
// //     }
// //     number(int a,int b){
 
// //        std::cout<<a<<b<<" ";

// //     }

// // };

// // int main()
// // {
// //     number obj;
//     number obj2(2,4);

    
//     return 0;
// }







// rite a program to define a class Time with:
// • hours and minutes
// • a constructor that initializes values using a constructor initialization list
// • a function to print total minutes


// #include<iostream>
// #include<algorithm>
// class timee{
//     private:
//     int hours;
//     int mins;
//     public:
//     timee(int hour,int min): hours(hour), mins(min){ };
//     void total(){
//         int tototalh=hours*60;
//       std::  cout<<"totoal min is "<< tototalh+mins<<std::endl;
//     }

// };

// int main()
// {
//     timee obj(1,34);
//     obj.total();
    
//     return 0;
// }







// Write a program to define a class Sample 
// and demonstrate a copy constructor by copying one 
// object into another



// #include<iostream>
// #include<algorithm>

// class sample{
//     public:
//     int x;
//     public:
//     sample(){
//         std::cout<<"dsimeple ocnstrutor";

//     }
//     sample(sample &ob){
//     x=ob.x;
  
//     std::cout<<x<<std::endl;

//     }
// };
// int main()
// {
//     sample obj;
//     sample obj1=obj;
//     obj1.x=10;

//     std::cout<<obj1.x;
    
//     return 0;
// }


// Write a program where:
// • an object is passed to a function by value
// • observe copy constructor call by printing a message inside it


// #include<iostream>
// #include<algorithm>

// class program{
//     public:
//     program(){
//         std::cout<<"normal construot ";
//     }
//     program(const program &obj){
//         std::cout<<"copy ocnstrutor";
//     }

// };
//     void display(program obje){

//         std::cout<<"fucniton ocnstrutor";
//     }
// int main()
// {
// program obj1;
// program obj2=obj1;
// display(obj2);

    
//     return 0;
// }



// Write a program to define a class Distance with:
// • meters and centimeters
// • a copy constructor
// • print values of original and copied objec


// #include<iostream>
// #include<algorithm>


// class distance{
//     private:
//     float meters,centimeter;
//     public:
//     distance(float m, float c){
//         meters=m;
//         centimeter=c;
//     }
//     distance(const distance &obj){
//    meters=obj.meters;
//    meters=20;
//    centimeter=obj.centimeter;
//     }
//     void display(){
//         std::cout<<meters<<" "<<centimeter<<std::endl;
//     }
// };

// int main()
// {
//     distance obj1(10,7);
//     distance obj2=obj1;
//     obj1.display();
//     obj2.display();
//     obj1.display();

    
//     return 0;
// }




// #include<iostream>
// #include<algorithm>


// class distance{
//     private:
//     float meters;
//     float centimeter;
//     public:
//     distance(float *m, float c){
//     meters
//     }
//     distance(const distance &source){

//         meters=new float(*obj.meters);
//         *meters=20;
//         centimeter=new float(*obj.centimeter);
//     }
//     ~distance(){
//         delete meters;
//         delete centimeter;
//          std::cout << "Memory Deallocated" << std::endl;
//     }
//     void display(){
//         std::cout<<*meters<<" "<<*centimeter<<std::endl;
//     }
// };

// int main()
// {
//     distance obj1(10,7);
//     distance obj2=obj1;
//     obj1.display();
//     obj2.display();
//     obj1.display();
    
//     return 0;
// }




#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "hello";
    cout << str.find_first_of("aeiou");
  cout<<str.find_last_of("aeiou");
    return 0;
}