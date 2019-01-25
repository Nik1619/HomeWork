/* In the physical laboratory, a long-term experiment to study
the gravitational field of the Earth. On the comm every minute to the lab.
a positive integer is transmitted – the current reading of the Sigma device
2015". The number of transmitted numbers in the series is known and equal to all
the numbers do not exceed 1000. The time during which the transfer occurs,
can be neglected.
It is necessary to calculate the "beta value" of the series of readings –
even the maximum product of the two readings, between the times of transmission
which took at least 6 minutes. If you cannot obtain such a work,
the answer is -1. The program should be effective in time and
memories. */
#include <iostream>
using namespace std;
int main(){
int pro = 0;
int prd = 0;
int x;
int mxmo = 1;
int mxmd = 1;
int* y = new int[6];          //this takes O(n) because this time is needed to create an array of six elements and to fill it and to complete n - 6 steps of a cycle, when each step takes the same static time.
int n;
cin>>n;
for(int i = 0; i < 6; i++){
    cin>>y[i];
}
for(int i = 6; i < n; i++){
    cin>>x;
    if((y[i % 6] % 2 !=  mxmo % 2) && (mxmo % 2 == mxmd % 2)){
        mxmd = y[i % 6];
    }
    if((y[i % 6] % 2 == mxmo % 2) && (y[i % 6] > mxmo)){
        mxmo = y[i % 6];
    }
    if((y[i % 6] % 2 == mxmd % 2) && (y[i % 6] > mxmd)){
        mxmd = y[i % 6];
    }

    if((pro < mxmo * x) && ((x % 2 == 0) || (mxmo % 2 == 0))){
        pro = mxmo * x;
    }
     if((prd < mxmd * x) && ((x % 2 == 0) || (mxmd % 2 == 0))){
        prd = mxmd * x;
    }
    y[i % 6] = x;
}
if((prd == 0) && (pro == 0)){
    cout<<"-1";
    return 0;
}
if(pro > prd){
    cout<<pro;
}
if(pro <= prd){
    cout<<prd;
}
return 0;
}
