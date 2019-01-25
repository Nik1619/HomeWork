/*Write a parsing program that finds for a given sequence
the length of N integers is necessary: the maximum product of two of its
items whose numbers differ by at least 5. The program can
to be effective */
#include <iostream>
using namespace std;
int main(){
int pr = 0;
int y;
int mxm = 0;
int* x = new int[5];
int n;
cin>>n;
for(int i = 0; i < 5; i++){
    cin>>x[i];
}
for(int i = 5; i < n; i++){             //this takes O(n) because this time is needed to create an array of five elements and to fill it and to complete n - 5 steps of a cycle, when each step takes the same static time.
    cin>>y;
    if(x[i % 5] > mxm){
        mxm = x[i % 5];
    }
    if(pr < mxm * y){
        pr = mxm * y;
    }
    x[i % 5] = y;
}
cout<<pr;
return 0;
}
