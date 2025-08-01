#include<bits/stdc++.h>
using namespace std;

class Bank{
    // public:
    private:
    int balance;
    int account_number;
    string name;

    public:
    Bank(){
        cout<< "constructor called"<< endl;
    }

    // Bank(int balance, int account_number, string name){
    //     this-> balance = balance;
    //     this-> account_number = account_number;
    //     this-> name = name;
    // };

    public:
    void set_value(int a,int b,string c){
        balance=a;
        account_number=b;
        name=c;
    }

    void deposite(int amount){
        balance+=amount;
        cout<<" Deposited "<< amount<<" in your account"<< endl;
    }

    void withdraw(int amount){
        if(amount> balance){
            cout<<" Insufficient balance"<< endl;
            return;
        }
            balance-=amount;
            cout<<" Withdrawn "<< amount<<" from your account"<< endl;
    }

    void check_balance(){
        cout<<" Your current balance is "<< balance<< endl;
    }
    
    void display_details(){
        cout<<" Account Number: "<< account_number<< endl;
        cout<<" Name: "<< name<< endl;
        cout<<" Balance: "<< balance<< endl;
    }

    // destructor
    ~Bank(){
        cout<< "Destructor called"<< endl;
    }
};

int main(){
    // Bank b1(100,10540540,"shivam");
    Bank b1;
    b1.set_value(100,10540540,"shivam");
    b1.display_details();
    b1.deposite(5000);
    b1.withdraw(500);
    b1.check_balance();

    // another way to create object
    Bank *b2 = new Bank();
    b2->set_value( 1000,10540541,"shubham");
    b2-> display_details();
    delete b2; // dynamic wale me delete krna hoga khud se dlt nhi hoga
    return 0;
}