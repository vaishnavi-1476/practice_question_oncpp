
// //  Given an integer array, count how many elements are even and how many are odd.
// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     int count =0;
//     int count2=0;
//     int arr[]={ 1,2,2,4,5,6};
//     for(int i=0;i<6;i++){
//         if(arr[i]%2==0){
//             count++;
//         }else if(arr[i]%2!=0){
//             count2++;
//         }
//     }
//     cout<<count<<" "<<count2;
    
//     return 0;
// }

// write a program to reverse an array without using another array

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     int arr[]={1,2,3,4,5};
//     int n=4;
//     int size=n;
//     for(int i=0;i<=n;i++){
//         if(i<size){
//         int temp=arr[i];
//         arr[i]=arr[size];
//         arr[size]=temp;
//         size--;
        
//         }
//         cout<<arr[i]<<" ";
//     }
  

//     return 0;
// }



//  Given an array of integers, print only the elements that are greater than the average4



#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int sum=0;
    float avg=0;

    int arr[]={1,2,4,5,6,7};
    int n=6;
    int max;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        
       
    }
    avg=(float)sum/n;

    for(int i=0;i<n;i++){
         if(arr[i]>avg){
            max=arr[i];

        cout<<max<<" ";
              
                // break;
        }
    }

    return 0;
}