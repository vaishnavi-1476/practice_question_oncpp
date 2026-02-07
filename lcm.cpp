// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int max_n=max(a,b);
//     int i;
//     for( i=max_n ;i<=a*b;i++){
//         if(i%a==0 && i%b==0){
//             cout<<i;
//             return i;
//             break;
//         }
//     }
// }
















//hcf

////traial

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int min_n=min(a,b);

//   while(min_n>0){
//         if(a%min_n==0 && b%min_n==0){
//             break;
//         }
//         min_n--;
//     }
//     cout<<min_n;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int min_n=min(a,b);
//     int i;
//     for( i=min_n;i>=2;i--){
//         if(a%i==0 && b%i==0){
//             cout<<i;
//             return i;
//             break;
//         }
//     }
// }















// // Write a C++ program using a while loop to simulate a robot’s battery consumption based on the following conditions:
// // The robot starts with 100% battery.
// // In each cycle:
// // If battery > 60%, reduce battery by 8%.
// // If battery ≤ 60% and > 30%, reduce battery by 5%.
// // If battery ≤ 30%, reduce battery by 3%.
// // The robot should continue operating while battery > 15%.
// // When battery becomes ≤ 15%, display: “Critical battery! Robot shutting down”.
// // The program should print the battery level at each cycle.

// #include<iostream>
// using namespace std;
// int main(){
//     int battery =100;
//     while(battery>15){
//         if(battery>60){
//             battery -=8;
//             cout<<"reduce battery by 8% "<<battery<<endl;

//         }else if(battery<=60 && battery >30){
//             battery -=5;
//                cout<<"reduce battery by 5% "<<battery<<endl;
//         }
//         else if(battery<=30 && battery >15){
//              battery -=3;
//                cout<<"reduce battery by 3% "<<battery<<endl;
//         }else{
//             cout<<"Critical battery! Robot shutting down ";
//         }
//     }cout<<"Critical battery! Robot shutting down ";
// }





// // Write a C++ program using a while loop to simulate robot movement based on distance correction rules:
// // The robot starts at 0 meters.
// // In each cycle:
// // If distance < 70 meters, increase distance by 12 meters.
// // If distance ≥ 70 and < 95 meters, increase distance by 6 meters.
// // If distance ≥ 95 meters, increase distance by 1 meter.
// // The robot continues moving until distance ≥ 100
// // After reaching the target, print the final distance.


// #include<iostream>
// using namespace std;
// int main(){
//     int start_d =0;
//     // int distance =100;
// while(start_d<=100){
//     if(start_d <70 ){
//         start_d +=12;
//         cout<< "increase start_d by 12 meters "<< start_d<<endl;
//     }else if(start_d>=70 && start_d<95){

//         start_d +=6;
//         cout<< "increase start_d by 6 meters "<< start_d<<endl;
//     }
//     else if(start_d>=95){

//         start_d +=1;
//         cout<< "increase start_d by 1 meters "<< start_d<<endl;
//     }
// }cout<<"starte withe "<<start_d<<endl;
// }












// // A mobile robot has wheel radius = 0.15 m.
// // Each wheel rotation moves the robot:
// // distance=2πr
// // The wheel encoder reports one rotation per loop cycle.
// // Write a C++ program using a for loop that:
// // Runs for 20 cycles. 
// // In each cycle, calculate distance traveled.
// // Add it to total distance.
// // Print distance after each cycle.
// // If total distance exceeds 20 meters, stop printing further values.


// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     float rad = 0.15;
//     float distance= 2*3.14*rad;
//     float total_ditance=0;
//     for(int i=1;i<=20;i++){
//         total_ditance=distance*i;
//         cout<<"distance after "<<i<<" th cycle ==>"<<total_ditance<<endl;
//         if(total_ditance>20) break;
            
        
//     }
//     cout<<"total distance is " << total_ditance;
// }


