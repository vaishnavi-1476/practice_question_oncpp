#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter a nums: "<<endl;
    cin>>a;
    cin>>b;
    char cond='y';
        int result=0;
    while(cond=='y'){
    try{
       if(b==0) throw b;

         result=a/b;
        cout<<result;
    }
    catch(int e){
        cout<<"invalid: "<<endl;
        cout<<"enter the y/n";
        cin>>cond;
        if(cond=='y'){
        cin>>b;
        result=a/b;
        cout<<result;
        break;
        
        }else if(cond=='n'){
            cout<<"the";
        }
    }
}
    return 0;
}