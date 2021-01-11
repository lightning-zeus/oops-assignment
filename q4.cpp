#include <iostream>
#include <string>

using namespace std;


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
for(int i =1;i<=10;i++){
    cout<<i<<endl;
}
//the i variable goes out of scope as soon as the for loop ends.
return 0;
}