#include <bits/stdc++.h>
using namespace std;
#define max 100 //maximum lenght of string
void display(char *const str2,int len){
    cout<<"The copied string is: "<<endl;
    for(int i=0;i<len;i++){
       cout<<*(str2+i);
    }

       cout<<endl;
}
void copy(char *const str,int len){
char string2[max];
//to copy string into
for(int i=0;i<len;i++){
    string2[i] = *(str+i);
}
//to display the copied string
char *const str2 = string2;
display(str2,len);
}

int main() {
 char string1[max];
 int len;
 cout<<"Input the length of the string"<<endl;
 cin>>len;
 cout<<"Input the string: "<<endl;
 for(int i=0;i<len;i++){
   cin>>string1[i];
 }char *const str = string1;
 copy(str,len);

    
    return 0;
}