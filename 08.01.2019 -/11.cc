/*An array containing N non-negative integers is given. Write on one of
a program that finds the number of programming languages in this array
items that are less than twice the value
the preceding element. */
#include <iostream>
using namespace std;
int main(){
int pr = 0;
int* x = new int[2];
int n;
cin>>n;
cin>>x[0];
for(int i = 0; i < n - 1; i++){                      //this takes O(n) because this time is needed to complete n steps of a cycle, when each step takes the same static time and to create array of two elements.
    cin>>x[1];
    if((x[0] < x[1]) && (x[1] / x[0] == 1)){
        pr = pr + 1;
    }
    x[0] = x[1];
}
cout<<pr;
return 0;
}
