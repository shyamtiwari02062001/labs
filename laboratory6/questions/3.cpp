#include<iostream>
#include<cstring>
using namespace std;
class account{
    public:
    string coustomer_name;
    string account_type;
    long int account_number;
    double min_balance;
    double Amount;
    account(string c_name,string _account_type,long int Account_number){
        coustomer_name=c_name;
        account_type=_account_type;
        account_number=Account_number;
        min_balance=1000;
        Amount=0.00;
    }
    void update_Balance(double _amount){
        if(_amount<min_balance){
            cout<<"\n Amount cannot be accepted. Minimum amount should be Rs 1000";
        }
        else{
            Amount=Amount+_amount;
        }
    }
    void show_Balance(){
        cout<<"\n Your current balance is "<<Amount;
    }
    void cashWidthdrawl(double cash){
        Amount=Amount-cash;
    }
    void check_balance(){
        if(Amount<min_balance){
            cout<<"\n 100 is deducted from your account due to low balance";
            Amount=Amount-100;
        }
        cout<<"\n Your current balance is "<<Amount;
    }
    void compute_interest(){
        Amount=Amount+0.06*Amount;
    }
    void Account_info(){
        cout<<"\n Account owner name "<<coustomer_name;
        cout<<"\n Account Type "<<account_type;
        cout<<"\n Account number "<<account_number;
        cout<<"\n current balance "<<Amount;
    }
};
class Current_account:public account{
    public:
    Current_account(string c_name,string account_type,long int Account_number):account(c_name,account_type,account_number){

    }
};
class Saving_account:public account{
    public:
    Saving_account(string c_name,string account_type,long int Account_number):account(c_name,account_type,account_number){
        
    }
};
int main(){
    Saving_account s_account("Shyam Tiwari","Savings",3543213);
    s_account.update_Balance(456778);
    s_account.Account_info();
}