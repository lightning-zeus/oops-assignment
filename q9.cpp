#include <iostream>
#include <string>
using namespace std;
void swap(string& first,string& second){
    string temp = first;
    first = second;
    second = temp;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s = "OBI WAN KENOBI";
string r = "DARTH VADER";
swap(s,r);
cout<<"The strings are: "<<s<<" and "<<r<<endl;
return 0;
}