/*Write a program that finds for a given sequence of length N
integers are required: the minimum product of its two elements, the numbers
which differ by at least 5. The program should be effective in
time and memory. */
#include <iostream>
using namespace std;
int main(){
int pr;
int y;
int mnm;
int* x = new int[5];
int n;
cin>>n;
for(int i = 0; i < 5; i++){
    cin>>x[i];
}
mnm = x[0];
cin>>y;
pr = mnm * y;
x[0] = y;
for(int i = 6; i < n; i++){         //this takes O(n) because this time is needed to create an array of five elements and to fill it and to complete n - 6 steps of a cycle, when each step takes the same static time.
    cin>>y;
    if(x[i % 5] < mnm){
        mnm = x[i % 5];
    }
    if(pr > mnm * y){
        pr = mnm * y;
    }
    x[i % 5] = y;
}
cout<<pr;
return 0;
}
