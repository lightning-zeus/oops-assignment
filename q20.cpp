#include <bits/stdc++.h>
#define pi 3.14
using namespace std;
class device{
int location;
int id;
double range;
int neighbour_count=0;
public:
device(int loc,int u_id): location(loc),id(u_id),range(pi*(double)loc*(double)loc)
{}
void neighbour_count(device i){
if(abs(location-i.location)<=range)
   neighbour_count++;
}
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
vector <device> d;
for(int i=0;i<10;i++){
    
}


return 0;
}