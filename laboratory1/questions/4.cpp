#include<iostream>
using namespace std;
double calculateTotalAmount(int principle_amount,int noofyears=1,int interestrate=10){
    return principle_amount+(principle_amount*noofyears*interestrate*0.01);
}
int main(){
    cout<<calculateTotalAmount(1000,2,12)<<endl;
    cout<<calculateTotalAmount(2000,2)<<endl;
    cout<<calculateTotalAmount(5000)<<endl;
}