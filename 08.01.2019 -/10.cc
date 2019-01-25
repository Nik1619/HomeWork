/* An integer array of N elements is given. Write a program that allows
find and print the product of the array elements that have odd
the value and are divided by 3. It is guaranteed that the source array has at least
one element whose value is odd and a multiple of 3. The program must be
effective in time and memory.*/
#include <iostream>
using namespace std;
int main(){
int pr = 1;
int x;
int n;
cin>>n;
for(int i = 0; i < n; i++){                          //this takes O(n) because this time is needed to complete n steps of a cycle, when each step takes the same static time.
    cin>>x;
    if((x % 3 == 0) && (x % 2 == 1)){
        pr = pr * x;
    }
}
cout<<pr;
return 0;
}
