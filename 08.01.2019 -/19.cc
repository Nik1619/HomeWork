/* The race track consists of two main roads and several crossings,
allowing you to go from one road to another. At all sites, including
moving, movement is allowed only in one direction, so moving is possible
only from road A to road B. the Driver starts at point A0 and has to finish
at point BN. He knows how much time will be able to pass each section of the path on each
road, that is, the time of passage of sections A0 A1, A1 A2,..., AN-1 AN, B0 B1, B1 B2, …,
BN-1BN. The passage time of all crossings A0 B0, A1 B1,..., AN BN is the same and
known rider. It is necessary to determine the minimum time for the rider
will be able to complete the track.*/
#include <iostream>
using namespace std;
int main()
{
int n;
int t;
int a;
int b;
int v;
int k;
cin>>n;
cin>>t;
k = t;
v = 0;                   //this takes O(n) because this time is needed to complete n steps of a cycle, when each step takes the same static time.
for(int i = 0; i < n; i++){
    cin>>a;
    cin>>b;
    v = v + a;
    if(k + b > v + t){
        k = v + t;
    }
    else{
            k = k + b;
    }
}
cout<<k;
return 0;
}
