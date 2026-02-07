// // Problem 1. Create a menu-driven program that repeats until user chooses Exit:
// // 1. Add two numbers 2. Check even or odd 3. Reverse a number 4. Exit


// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){

// int condition ;

// char char_instruction ='y';
// while(char_instruction =='y'|| char_instruction=='Y'){
// cout<<"1.  Add two numbers"<<endl;
// cout<<"2.  . Check even or odd "<<endl;
// cout<<"3. Reverse a number "<<endl;
// cout<<"4. Exit"<<endl;

// cout<<"enter the conditon in between 1to 4 "<<endl;
// cin>>condition;
//     if(condition==1){
//         int a,b;
//         cout<<"enter the first num ";
//         cin>>a;
//         cout<<"enter the second num ";
//         cin>>b;
        
//         cout<<"addtion of two number ==> "<<a+b;

//     }
//     else if(condition==2){
//         int a;
//         cout<<"enter the num to check  ";
//         cin>>a;
//         if(a/2==1){
//         cout<<"given is even number ";
//         }else{
//             cout<<"given is odd numebr";
//         }
//     }else if(condition==3){
//         string str;
//         getline(cin , str);
//         reverse(str.begin(),str.end());
//         cout<<"reverse of number is : "<<str;
//     }else if(condition==4){
//         cout<<"EXIT THE LOOP";
//         break;

//     }else{
//         break;
//     }
//     cout<<"do you want to ocntinue of not y/n";
//     cin>>char_instruction;
// }
// return 0;

// }









// Problem 2. Design a password checker:
// Rules for a strong password:
// Length ≥ 8
// Contains at least one digit
// Contains at least one uppercase letter
// Task:
// Write a C++ program that:
// Takes password as input (string)
// Prints "Strong password" or "Weak Password"



// #include<iostream>
// #include<string>
// #include<algorithm>

// using namespace std;
// int main(){
//     string pass;
//     cout<<"enter the password ";
//       bool upper=false;
//        bool digit=false;

//     getline(cin,pass);
//     if(pass.length() <8){
//         cout<<"enter the password more than 8 letter ";

//     }else{
//         for(int i=0;i<=pass.length();i++){
//           if(isupper(pass[i])){
//             upper=true;
//           }
//           if(isdigit(pass[i])){
//             digit=true;
//           }
       
           

//     }
//     if(upper==1 && digit==1){
         
//          cout<<"Stroung password "<<endl;
//          }
//           else{

// cout<<"weak password ";
          
//     }

//     }
  
// }






// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main(){
//     int count1=0, count2=0 ,count3=0, count4=0;
//     string str;
//     getline(cin ,str);
//     for( char v :str){
//         bool upper =false ;
//         bool lower =false ;
//         upper =isupper(v);
//         lower = islower(v);
//         if(isupper(v)){
//             count1++;
         
//         }
//         else if(lower){
//             count2++;
            
//         }
//     }   cout<<count1<<endl;
//     cout<<count2;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int dayil=10;
//     int sum=10;
//     for(int i=2;i<=31;i++){
//         if(i%2==0){
//             dayil=dayil+1;
//         }else if(i%2!=0){
//             dayil=dayil+2;
//         }
//         sum=sum+dayil;
//     }

//     cout<<sum;
// }



// Problem 3: Monthly Expense Analyzer
// A person spends money for 30 days.
// Rules:
// Day 1 spending = 100
// Even day → previous day + 20
// Odd day → previous day + 10
// If spending exceeds 2100, next day onwards spend previous day +5
// Task:
// Print daily spending
// Print total spent


    // #include<iostream>
    // using namespace std;
    // int main(){
    // int daily =100;
    // int sum=100;
    
    //     cout<<"fist day  spend + ==> 100 "<<endl;
    //     for(int i=2;i<=30;i++){
    //         if(daily>2100){
    //             cout<<"daily spend +5 ==> ";
    //             daily=daily+5;
    //             cout<<daily<<endl;
    //         }
    //         else if(i%2==0){
    //             cout<<"daily spend +20 ==> ";
    //             daily=daily+20;
    //             cout<<daily<<endl;

    //         }else if(i%2!=0) {
    //             cout<<"daily spend +10 ==> ";
    //             daily=daily+10;
    //             cout<<daily<<endl;
    //         }
        
        
    //         sum= sum+daily;
    //     cout<<"sum is ==> "<<sum<<endl;
    //     }
    //     cout<<sum<<endl;
    // }


// A robot operates in different modes based on input command:
// Commands:
// "A" → Autonomous 	mode
// "M" → Manual mode
// "S" → Shutdown
// Rules:
// Autonomous mode runs a loop printing:
// Navigating...
// 5 times
// Manual mode prints:
// Waiting for user input
// Shutdown exits program



// Take a character and check if it is uppercase or lowercase


// #include<iostream>
// #include<string>
// using namespace std;
// #include<algorithm>
// int main(){
// char ch;

// cin>>ch;
//         if(isupper(ch)){

//         cout<<"is upper ";
//     }else if(islower(ch)){
//         cout<<"is lowert ";
//     }
// }





// //check leap year 

// #include<iostream>
// using namespace std;
// int main(){

//     int year;
//     cin>>year;
//     if(year %400==0){
//         cout<<"given s leap year";
//         break;
//     }else if(year%100 ==0){
//         cout<<"given is not leap year";
//         break;
//     }
//     else if(year%4==0){
//         cout<<"leap year";
//     }else{
//         cout<<"not leap year";
//     }
// }






// Count number of digits in a number



// #include<iostream>
// using namespace std;
// int main(){
//     int count=0;
//     int last;
  
//     int number;
//       cin>>number;
//     while(number>0){
//        last= number%10;
//        count++;
//   number=number/10;
//     }
  
//     cout<<count;

// }


// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     int fact=1;
//     cin>>num;
//     for(int i=1;i<=num;i++){
//         fact=fact*i;
//         cout<<fact<<endl;
//     }
// }





// #include<iostream>
// using namespace std;
// int main(){
// int devident;
// cin>>devident;
// int qutient;
// int devisor=2;
// int rem;
// rem=devident%devisor;
// int last=rem;
// qutient=(devident-rem)/devisor;

// while(qutient>0){
// rem=qutient%devisor;

// qutient=qutient/devisor;///devident =(devisor *quoten)+rem

// cout<<rem;
// }
// cout<<last;
// }




// // ATM menu keeps repeating until user enters 0 to exit


// #include<iostream>
// using namespace std;

// int main(){
//     char condi='y';
//     bool loop =true;
//    while(true){

//     int num;
//     cout<<"enter the menu "<<endl;

//     cin>>num;
//     if(num==1){
//         cout<<"nume=1";
//     }else if(num==2){
//         cout<<"num==2";
//     }else if(num==3){
//         cout<<"num =3";
//     }else if(num==0){
//         loop =false;
//         cout<<"break";
//         break;
//     }else {
//         loop = false;
//         break;
//     }
//     // cout<<"do oyu want to ocntinue y/n"<<endl;
//     // cin>>condi;
//    } 
// }





// #include<iostream>
// using namespace std;

// void printarr(int arr[],int size){
//  int* poiter=arr;
//     for(int i=0;i<size;i++){
//         cout<<*(poiter+i)<<" ";
//     }  
// }
// int main(){
//      int arr[]={1,2,3,4,50};
//      int size=(sizeof(arr)/4);
//      printarr(arr,size);                                                           
// }




// //addiitoon of arr
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//       cin>>arr[i];
//     }
//     for(int j=0;j<n;j++){
//         arr[0]=arr[0]+arr[j+1];
//     }
//     cout<<arr[0];
// }







// // C program to find largest element in an array

// #include<iostream>
// using namespace std;
// int main(){
// int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//       cin>>arr[i];
//     }
//     int max=arr[0];

// for(int j=0;j<n;j++){
//     if(arr[j]>max){
//         max=arr[j];
//     }
// }
// cout<<max;
// }


// C/C++ Program for Given an array A[] and a number x, check for pair in A[] with sum as x



#include<iostream>
using namespace std;
int main(){
int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int target;
    cout<<"enter the target";
    cin>>target;
    bool condi;
    for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        if((arr[i]+arr[j])==target){
            // cout<<arr[i]+arr[j];
            condi =true;
            break;
        }else{
            condi =false;
            // break;
        }
        
    }
}
if(condi){
        cout<<"true";
    }else{
        cout<<"false;";
    }
}