#include<iostream>
#include<string>
#include <algorithm>

using namespace std;
int main(){
 string s="raghav";
 cout<<s.length();
reverse(s.begin(),s.end());
cout<<s;
}