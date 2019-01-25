/* You are given a set of N positive integers. It is necessary to determine which
the number is most often found in the decimal notation of the numbers in this set. If
there are several such numbers, you need to print them all in descending order-from
the greater to the lesser. Write a program that is efficient in time and memory
to solve this problem.*/
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
    while(k != 0){
            v = k % 10;
            D[v]++;
            k = k / 10;
    }
}
for(int i = 0; i < 10; i++){
    if(mxm < D[i]){
        mxm = D[i];
    }
}
for(int i = 9; i >= 0; i--){
    if(mxm == D[i]){
       cout<<i<<" ";
    }
}
return 0;
}
