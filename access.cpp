#include<iostream>
#include<string>
using namespace std;

class player{
    //attributes

    public:
    string name {"player"};
    int health;
    int xp;

    //method
    public:
    void talk(string text_to_Say){
        cout<<"say"<<text_to_Say<<endl;

    }
    bool is_Dead();
};

int main(){
    player frank;
    frank.name ="vaish";
    cout<< frank.name<<frank.health<<endl;
    frank.talk("hii");

}