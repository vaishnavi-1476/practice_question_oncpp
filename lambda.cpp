#include<iostream>
#include<algorithm>

int main()
{
    auto add=[](int n ,int m){
        return n+m;
    };
    std:: cout<<" addition is "<< add(8,9);
    return 0;
}