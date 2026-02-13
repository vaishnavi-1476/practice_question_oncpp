// C++ program to find factorial by defining functions outside the class



// #include<iostream>
// #include<algorithm>

// class fact{
//     public:
//     int val;
//     int facto(){
//         int fact=1;
     
//         if(val<=1){
//             return 1;
//             std::cout<<1;
//         }else{
//         for(int i=1;i<=val;i++){
//             fact=fact*i;
//         }

//             std::cout<<fact<<std::endl;
//         return fact;
//     }
//     return 1;

//     }
// };

// int main()
// {
//     int value;
//        std::cout<<"enter the value ";
//         std::cin>>value;
//     fact obj;
//     obj.val=value;
//     obj.facto();
//     return 0;
// }


// // C++ program to add two time by Call by reference
// #include<iostream>
// #include<algorithm>

// class Time{
//     private :
//     int hr;
//     int min;
//     int sec;

//     public:
//     void gettime(int hr1,int min1,int sec1){
//         hr=hr1;
//         min=min1;
//         sec=sec1;
        
        
//     }
//     void display(){
//         std::cout<<"[ "<<hr<<" : "<<min<<" : "<<sec<<" ]";
//     }
//     void add(Time &t1,Time &t2){
//         sec=t1.sec+t2.sec;
//         min=sec/60;
//         sec=sec%60;
//         min=min+t1.min+t2.min;
//         hr=min/60;
//         min=min%60;

//         hr=hr+t1.hr+t2.hr;
        
       

//     }

// };



// int main()
// {
//     Time t1,t2,t3;
//     t1.gettime(8,4,10);
//     t1.display();

//     t2.gettime(8,5,55);
//     t2.display();
    
//     t3.add(t1,t2);
//     t3.display();
//     return 0;
// }





// // C++ program to add two time by Call by reference
// #include<iostream>
// #include<algorithm>

// class Time{
//     private :
//     int hr;
//     int min;
//     int sec;

//     public:
//     void gettime(int hr1,int min1,int sec1){
//         hr=hr1;
//         min=min1;
//         sec=sec1;
        
        
//     }
//     void display(){
//         std::cout<<"[ "<<hr<<" : "<<min<<" : "<<sec<<" ]";
//     }
//     void add(Time *t1,Time *t2){
//         sec=t1.sec+t2.sec;
//         min=sec/60;
//         sec=sec%60;
//         min=min+t1.min+t2.min;
//         hr=min/60;
//         min=min%60;

//         hr=hr+t1.hr+t2.hr;
        
       

//     }

// };



// int main()
// {
//     Time t1,t2,t3;
//     t1.gettime(8,4,10);
//     t1.display();

//     t2.gettime(8,5,55);
//     t2.display();
    
//     t3.add(&t1,&t2);
//     t3.display();
//     return 0;
// }



// // C++ Program to access protected data member using Inheritance

// #include<iostream>
// #include<algorithm>
// class base{
//     protected:
    
//     int a=10;
//     public:
//     int b=10;
    
// };
// class derive:protected base{
//     public:
//     int display(){
//         return a;
//     }
    
// };
// int main()
// {
//     base obj;
//     derive obj2;
//    std::cout<<obj2.display();


    
//     return 0;
// }





// C++ Program for enter Patient details using Inheritance



// #include<iostream>
// #include<algorithm>
// using namespace std;

// class A{
//     public:
//     A(){
//         cout<<"a";
//     }

// };
// class B: public A {
//     public:
//     B(){
//         cout<<"b";
//     }
// };
// int main()
// {
//    A obj;
//     B obj1;
    
//     return 0;
// }







// #include<iostream>
// #include<algorithm>
// using namespace std;

// class A{
//     public:
//     A(int y){
//         cout<<"a"<<y;
//     }

// };
// class B: public A {
//     public:
//     B(int x,int y):A(x){
//         cout<<"b"<<y;
//     }
// };
// int main()
// {
//   B obj(4,5);
    
//     return 0;
// }




// C++ Program to find Area of Rectangle using inheritance

// #include<iostream>
// #include<algorithm>
// using namespace std;
// class area{
//     public:
//     int L;
//     int W;
//     public:
//     void get_value(int length ,int width){
//         L=length; W=width;
        
//     }
    
// };
// class sqr:public area{
// public:
//     int size;
    
//     void area(){
//         cin>>size;
//         area::get_value(size,size);
//     }
//     int display(){
//         cout<<"area of square is "<<size*size;
//     }

// };
// class rec:public area{
//     public :
//      int x;
//         int y;
       
//     void area(){
//         cin>>x;
//         cin>>y;
//         area::get_value(x,y);
//     }
//     void display(){
//         cout<<"area is "<<x*y;
//     }
// };
// int main()
// {
//     rec obj;
//     obj.area();
//     obj.display();
    

//     sqr obj1;
//     obj1.area();
//     obj1.display();
//     return 0;
// }





// #include<iostream>
// #include<algorithm>
// using namespace std;


// union data1{
//     /* data */
//     int d;
//     int m;
// };

// int main()
// {
//     data1 obj;
//     obj.d=10;
//     obj.m=20;
//     cout<<obj.d;
    
//     return 0;
// }




// Create a base class Employee with:
// Data members:
// string name
// int id
// A virtual function calculateSalary()



// #include<iostream>
// #include<algorithm>
// #include<string>
// class employee{

    
//     public:
//     std::string name;
//     int id;
//     void get_data(){
//         std::cin>>name;
//         std::cin>>id;
        
//     }
//     void display(){
//         std::cout<<name<<" "<<id<<std::endl;
//     }
// };
// class em1:public employee{
//     public:
// void get_data(){
//     employee::get_data(); 
    
// }
// void display(){
//     employee::display();
// }
// };
// class em2:public employee{
//     public:
// void get_data(){
//     employee::get_data(); 
    
// }
// void display(){
//     employee::display();
// }
// };
// int main()
// {
//     em1 obj;
//     em2 obj2;
//     obj.get_data();
//     obj.display();

//     obj2.get_data();
//     obj2.display();
//     return 0;
// }












// #include<iostream>
// #include<algorithm>
// #include<string>
// class employee{

    
//     public:
//     std::string name;
//     int id;
//     std::string* ptr;
//     int* ptr2;
//     employee(){
//         std::cin>>name;
//          ptr=new std::string(name);
//         std::cin>>id;
//          ptr2=new int(id);

//     }
//     ~employee(){
//         delete ptr;
//         delete ptr2;
//     }

// };
// class em1:public employee{
//     public:
// em1():employee(){
    
//         std::cout<<name<<" "<<id<<std::endl;
// }
// // ~em1();
  

// };
// class em2:public employee{
//     public:
// em2():employee(){
    
//         std::cout<<name<<" "<<id<<std::endl; 
    
// }
// // ~em2();
// };
// int main()
// {
//     em1 obj;
//     em2 obj2;

//     return 0;
// }



// Create a derived class FullTimeEmployee:
// Additional data member: double monthlySalary




 

