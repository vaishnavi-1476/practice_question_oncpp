// Write a program to define a class Sensor with:
// • reading as a data member
// • parameterized constructor
// • copy constructor
// • print messages to show which constructor is called

// #include<iostream>
// #include<algorithm>

// class sensor{
//     public:
//     int reading;
//     public:
//     sensor(int read){
//         reading=read;
//         std::cout<<"parameterized construotr"<<reading<<std::endl;
//     }
//     sensor(sensor &source){
//         reading=source.reading;
//         std::cout<<"copy ocnstrotr"<<reading<<std::endl;
//     }
//     ~sensor(){

//     }


// };

// int main()
// {
//     sensor obj(10);
//     sensor obj2=obj;
//     obj.reading=99.9;
//     std::cout<<obj.reading<<std::endl;
//     std::cout<<obj2.reading<<std::endl;

//     return 0;
// }


// A library has seats numbered 1–50. Users reserve seats for different durations.
// Write a program to:
// • Store reservations
// • Prevent double booking
// • Print available seats after each reservation


// #include<iostream>
// #include<algorithm>
// void printavaible(bool sit_arr[]){
//     std::cout<<"available sit aree "<<std::endl;
//     for(int i=0;i<=50;i++){
//         if(sit_arr[i]==false){
//            std::cout<<i+1<<" ";
          
//         }
       
//     }
//       std::cout<<std::endl;
// }

// int main()
// {
    
//     int no_seat;
//     int total_seat=50;
//     bool seat_number[total_seat]={false};

//     char condi='y';
//     std::cout<<"enter the number of seat "<<std::endl;
//     std::cin>>no_seat;
//     while(condi=='y'){

//     if(no_seat<1|| no_seat>50){
//         std::cout<<"enter the valid number"<<std::endl;
//         std::cout<<"enter the number of seat "<<std::endl;
//     std::cin>>no_seat;
//     }
//     if(seat_number[no_seat]){
//         std::cout<<"already booked"<<std::endl;
        
//         printavaible(seat_number);
//         std::cout<<"enter the number of seat "<<std::endl;
//         std::cin>>no_seat;
//     }
//     else{
//     seat_number[no_seat]=true;
//     std::cout<<"seat has been sucefully reserved "<<std::endl;
//     printavaible(seat_number);
//     std::cout<<"do you want to continue y/n "<<std::endl;
//     std::cin>>condi;
//     if(condi=='y'){
//     std::cout<<"enter the number of seat "<<std::endl;
//     std::cin>>no_seat;
//     }
//     else if(condi=='n'){
//         std::cout<<"n thank you to wisit ";
//     }
//     }

//     }
//     return 0;
// }





// Store temperature readings taken hourly for a day.
// Compute:
// • Highest and lowest temperature
// • Longest continuous rise in temperature
// • Sudden drops exceeding a threshold

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int update(int* p){
//     *p=*p+5;
//     return *p;   
// }
// void update1(int* p){
//     p=p+5;
   
// }
// int main()
// {
//     int x=10;
//     int* p=&x;
//     update(p);
//     cout<<*p;
//     update1(p);
//     cout<<*p;
//     return 0;
// // }


// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     int arr[3]={10,5,10};
//           int n=sizeof(arr)/4;

//           for(int i=0;i<n;i++){
//               for(int j=i;j<n;j++){
//                   if(arr[i]>arr[j]){
//                       swap(arr[i],arr[j]);
//                   }
//               }
//           }
//         for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//         }
// }



class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=size(arr);
        //   for(int i=0;i<n;i++){
        //       for(int j=i;j<n;j++){
        //           if(arr[i]>arr[j]){
        //               swap(arr[i],arr[j]);
        //           }
        //       }
        //   }
        int large=-1;
        int second_large=-1;
       for(int a:arr){
           if(a>large){
               second_large=large;
               large=a;
           }
           else if(large>a && second_large<a){
               second_large=a;
           }
       }
          return second_large;
          
    }
};