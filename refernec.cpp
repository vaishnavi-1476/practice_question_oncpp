#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vect{ 10, 20, 30, 40 };

    // We can modify elements if we
    // use reference
  vector<int> *ptr=&vect;


// int arr[]{ 10, 20, 30, 40 };
// int *ptr=arr;

    // for (int& x : vect) {
    //     x = x + 5;
    // }
    cout<<&vect<<endl;

    // Printing elements
    char ch[]="1werty";
    cout<<sizeof(ch)/sizeof(char);
    string str="12sdew";
    cout<<size(str);
 
    return 0;
}