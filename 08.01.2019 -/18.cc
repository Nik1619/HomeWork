/* Santa Claus and snow maiden come to children's matinees with a bag of chocolates. Grandfather
Frost divides the candies equally among all those present (children
matinee is never more than 100), and the remaining candy gives
Snow maiden. The snow maiden writes down each time in a notebook the quantity received
candies'. If the candy is divided between all the children without a trace, snow maiden
receives nothing and writes nothing. When the parties over, Grandpa
Frost was wondering what number most often recorded snow maiden. Grandfather
Frost and snow maiden are magical, so the number of matinees is N, on which they
have visited, can be very large. Write a program that will
solve this problem.
Description of input data
The first line contains one positive integer-the number
first, each of the following N lines contains two integers:
D-the number of children who came to the next matinee, and then K-the number
candy in Santa's sack at this party. Guaranteed to run
following relation:
1 ≤ N ≤ 10000
1 ≤ D ≤ 100 (for each D)
D ≤ K ≤ 1000 (for each pair D, K)
The description of the output
The program should print one number-the one that the snow maiden wrote
most often. If several numbers were written equally often, it is necessary to print
most of them. If the snow maiden has never recorded anything, it is necessary to withdraw
zero. */
#include <iostream>
using namespace std;
int main()
{
int n;
int d;
int k;
int mxm;
int mxxm;
int v;
cin>>n;
int* g = new int[100];
for(int i = 0; i < 100; i++){         //this takes O(n) because this time is needed to create an array of one hundred elements and to fill it and to complete n steps of a cycle, when each step takes the same static time and to complete 99 steps of a cycle, when each step takes the same static time..
    g[i] = 0;
}
for(int i = 0; i < n; i++){
    cin>>d;
    cin>>k;
    v = k % d;
    g[v]++;
}
mxm = 0;
for(int i = 1; i < 100; i++){
    if(mxm <= g[i]){
        mxm = g[i];
        mxxm = i;
    }
}
if(mxm == 0){
    mxxm = 0;
}
cout<<mxxm;
return 0;
}
