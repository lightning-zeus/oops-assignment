#include <bits/stdc++.h>
using namespace std;
class savings_account{
    string acc_name;
    int u_id;
    int balance;
    public:
    savings_account(string s,int id,int bal): acc_name(s),u_id(id),balance(bal)
    {}
    void deposit(int bal){
        balance += bal;
    }
    void withdrawl(int bal){
        if(balance-bal>=1000)
          balance -= bal;
        else
        cout<<"Sorry cant withdraw this much amount as it violates the bank's minimum balance policy"<<endl;
    }int interest(int roi){
       double SI = (double)balance * 1 * (double)roi/100;
       balance += SI;
       return SI;


    }
};

int main() {
 int total_interest=0;
 for(int i=0;i<99;i++){
     savings_account s(to_string(i+65),i+1,1000+i);
     total_interest += s.interest(i+5);
 }
 cout<<"The total interest paid by the bank is: "<<total_interest<<endl;
    
    return 0;
}