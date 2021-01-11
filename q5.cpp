#include <iostream>
#include <string>
#include <math.h>
using namespace std;


double celsius_to_fahrenheit(int x){
    double f = (double)x * 9/5;
    f += 32;
    return f;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x=0;
for(x=0;x<=100;x++){
    cout<<x<<" Celsius corresponds to "<<celsius_to_fahrenheit(x) <<" Fahrenheit"<<endl;
}
return 0;
}