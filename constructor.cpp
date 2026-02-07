#include<iostream>
#include<string>
using namespace std;
class player{
    private:
    int health;
    int xp;
    string name;

    public:
    // /methods
    void set_name(string n){
        name=n;
    }
    string get_name(){
        return name;
    }
    player(){
        name="none";
        health=100;
        xp=3;
    }
};

int main(){
player frank;
frank.set_name("frank");
cout<<frank.get_name()<<endl;
return 0;
}