#include<iostream>
#include<algorithm>

void createptr()
{
    int* ptr=new int[10];
    delete[] ptr;
    delete[] ptr;
}
int main()
{
    createptr();
std::cout<<"helo fined";
    return 0;
}