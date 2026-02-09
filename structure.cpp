#include<iostream>
#include<algorithm>


struct player
{
   
   int age;
   std::string name;
   int data(int age1,std::string name1){
    age=age1;
    name=name1;
   std::cout<<age<<" "<<name;

   }
};


int main()
{
    player p;
    p.age=10;
    p.name="vaish";
    p.data(p.age,p.name);
    
    return 0;
}