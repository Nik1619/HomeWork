/* It is necessary to determine the number of which length are most common in this
set and how many numbers in it of this length. If numbers of different lengths occur
equally often (and more often than numbers of any other length), you need to choose a greater
length. Write a time-efficient and memory-efficient program to solve
this task. */
#include <iostream>
using namespace std;
int main()
{
int n;
int k;
int v;
int mxm;               //this takes O from a sum lenght of all elements because this time is needed to create an array of ten elements and to fill it and to work with every digit in every number, when each digit takes the same static time and to complete twenty steps of a cycles,when each step takes the same static time.
mxm = 0;
int* D = new int[10];
for(int i = 0; i < 10; i++){
    D[i] = 0;
}
cin>>n;
for(int i = 0; i < n; i++){
    cin>>k;
    v = 0;
    while(k != 0){
            v++;
            k = k / 10;
    }
    D[v]++;
}
for(int i = 0; i < 10; i++){
    if(mxm < D[i]){
        mxm = D[i];
    }
}
for(int i = 9; i >= 0; i--){
    if(mxm == D[i]){
       cout<<i<<" "<<D[i];
       return 0;
    }
}
return 0;
}
