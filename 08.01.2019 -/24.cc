/* You are given a set of N positive integers. Of these numbers, formed the
possible pairs (a pair is considered to be two elements that are on different
places in the set, the order of the numbers in the pair is not taken into account), in each pair
the sum of the elements is calculated. It is necessary to determine the number of pairs for
which the resulting amount is divided by 9. Write effective on time and on
a memory program to solve this problem. */
#include <iostream>
using namespace std;
int main()
{
int a = 0;
int b = 0;
int n;
cin>>n;
int * D = new int [9];                //this takes O(n) because this time is needed to create an array of nine elements and to fill it and to complete n steps of a cycle and to complete four steps of cycle, when each step takes the same static time.
for(int i = 0; i < 9; i++){
    D[i] = 0;
}
for(int i = 0; i < n; i++){
    cin>>a;
    b = a % 9;
    D[b]++;
}
a = D[0]*(D[0] - 1)/2;
for(int i = 1; i <= 4; i++){
    a = a + D[i]*D[9 - i];
}
cout<<a;
return 0;
}
