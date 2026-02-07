#include<iostream>
#include<string>
using namespace std;

class cars{
    private:
    string comapny_name;
    string model_name;
    string fuel_type;
    float mileage;
    double price;

    public:
    cars(){
        cout<<"Default construtorcalled"<<endl;

    }
    void setData(string cname,string mname,string ftype,float m,double p){
        comapny_name=cname;
        model_name=mname;
        fuel_type=ftype;
        mileage=m;
        price=p;

    }
    void dispaly(){
        cout<<comapny_name<<endl; 
    }
};
int main(){
cars car1;
return 0;
}