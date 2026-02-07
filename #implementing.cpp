 #include<iostream>
 #include<string>
 using namespace std;

 class Account{
    private:
    string name;
    double balance;

    public:

    // methodas declares inline means inside the class
    
    void set_balance(double bal){
        balance =bal;

    }
    double get_balance(){
        return balance;
    }
    // void set_name(string n){
    //   name=n;

    // }
    // string get_name(){
    //     return name;
    // }


// methodas declares outline means outside the class
    
    void set_name(string n);
    string get_name();


    bool deposit(double amount);
    bool withdraw(double amount);

 };
void Account:: set_name(string n){
    name =n;
}
string Account:: get_name(){
    return name;
}

int main(){

    Account frank_account;
    frank_account.set_name("vaish");
    frank_account.set_balance(76554.32);
    cout<<frank_account.get_balance();
    frank_account.get_name();
    return 0;
}