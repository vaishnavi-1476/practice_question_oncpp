#include<iostream>
#include<string>
#include <algorithm>

using namespace std;
int main(){
int score []{100,200,30,300,-1};
int* score_ptr{score};//array itself pass by reference  no need to add &
while(*score_ptr != -1){
    cout<<*score_ptr<<endl;
    score_ptr++;

}
while(*score_ptr != -1){
    cout<<*score_ptr++<<endl;
  

}


}