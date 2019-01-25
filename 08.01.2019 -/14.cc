/*Write a program that finds for a given sequence of length N
non-negative integers are required: the maximum sum of its two
items whose numbers differ by at least 5. The program should
be time and memory efficient */
#include <iostream>
using namespace std;
int main(){
int sum = 0;
int y;
int mxm = 0;
int* x = new int[5];
int n;
cin>>n;
for(int i = 0; i < 5; i++){            //this takes O(n) because this time is needed to create an array of five elements and to fill it and to complete n - 5 steps of a cycle, when each step takes the same static time.
    cin>>x[i];
}
for(int i = 5; i < n; i++){
    cin>>y;
    if(x[i % 5] > mxm){
        mxm = x[i % 5];
    }
    if(sum < mxm + y){
        sum  = mxm + y;
    }
    x[i % 5] = y;
}
cout<<sum;
return 0;
}
