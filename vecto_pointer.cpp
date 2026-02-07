#include<iostream>
#include<vector>
#include<string>
using namespace std;
void display(vector<string>* v){
for(auto str:*v){
cout<<str<<endl;
}
}

int main(){

	vector<string>  stooges {"gee","egh","he"};
//	vector<string>* vector_ptr =&stooges;
	display(&stooges);
}
