#include<iostream>
#include<string>
using namespace std;

//     void f(int *p) {
//     *p = *p + 10;
// }

// int main() {
//     int x = 5;
//     f(&x);
//     cout << x;
// }



// int main(){
//     int a=1025;
//     int *p=&a;
//     int b=a;
//     char *z=(char*)p;
//     cout<<p<<endl;
//     cout<<*z<<endl;
//     cout<<z<<endl;
//     cout<<&a<<endl;
//     cout<<&b<<endl;
    
// }


// // Write a function that swaps two integers using pointers
// int main(){
//     int  a=10;
//     int b=20;
//     int* ptr1=&a;
//     int* ptr2=&b;
//     int temp= *ptr1;
//     ptr1=ptr2;
//     cout<<*ptr1<<endl;
//     *ptr2=temp;
//     cout<<a<<" "<<b;
// }



// Reverse an array using pointers (no indexing).


int main(){
    int arr[]={1,2,3,4,5,6};
    int *ptr=arr;
      
    int size = sizeof(arr)/sizeof(arr[0]);
    int* last=ptr+size-1;
while(ptr<last){
      
        int temp=*ptr;
        *ptr=*last;
        *last=temp;
        ptr++;
        last--;

        
    }
        for(int j=0;j<size;j++){
            cout<<arr[j]<<endl;
        }

}