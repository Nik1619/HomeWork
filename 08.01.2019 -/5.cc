/* The performer has four commands, which are assigned numbers:
1. Add 1
2. Add 4
3. Add 5
4. Multiply by 2
Write a program that finds the shortest program that receives from
number x number Y. the Program should write the program as a sequence
teams'. We can assume that such a program exists. If short programs
several-write any of them.*/
#include <iostream>
using namespace std;
int main()
{
int n;
int m;
int mnm;
int v;
cin >> n;
cin >> m;
int* D=new int[n - m + 1];
int* B=new int[n - m + 1];
for(int i = 0; i < n - m + 1; i++){
D[i] = 0;                                                              //this takes O(n - m + 1) because this time is needed to create two arrays and to complete twice n - m steps of a cycle, when each step takes the same static time.
}
for(int i = 0; i <= n - m; i++){
    B[i] = 0;
}
for(int i= 0 ; i < n - m + 1 ; i++){
             v = 0;
           mnm = 0;
       if(i - 1 >= 0){
            mnm = D[i - 1] + 1;
            v = 1;
       }
       if(i - 4 >= 0){
            if(mnm > D[i - 4] + 1){
                mnm = D[i - 4] + 1;
                  v = 2;
            }
       }
       if(i - 5 >= 0){
            if(mnm > D[i - 5] + 1){
                mnm = D[i - 5] + 1;
                  v = 3;
            }
       }
       if(((i + m) % 2 == 0) && ((i + m) / 2 >= m)){
             if(mnm > D[(i + m) / 2 - m] + 1){
                mnm = D[(i + m) / 2 - m] + 1;
                  v = 4;
            }
       }
       D[i] = mnm;
       B[i] = v;
}
for(int i = n - m; i > 0; i-=1){
    cout<<B[i]<<" ";
    if(B[i] == 4){
        i = ((i + m) / 2) - m + 1;
        continue;
    }
    if(B[i] == 3){
        i = i - 4;
         continue;
    }
    if(B[i] == 2){
        i = i - 3;
         continue;
    }
    if(B[i] == 1){
        i = i;
         continue;
    }
}
cout<<D[n - m];
return 0;
}
