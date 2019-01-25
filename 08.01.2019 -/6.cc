/* Write a program that finds the decomposition of an integer into the sum of exact squares, so that the number of summands is minimal.*/
#include <iostream>
using namespace std;
int main()
{
int n;
int m;
int mnm;
int v;
int c;
cin >> n;
cin >> m;
cin >> c;
int* D=new int[c - m + 1];
int* B=new int[c - m + 1];
for(int i = 0; i < c - m + 1; i++){
D[i] = 0;                                            //this takes O(n - m + 1) because this time is needed to create four arrays and to complete four times n - m steps of a cycle, when each step takes the same static time.
}
for(int i = 0; i <= c - m; i++){
    B[i] = 0;
}
for(int i= 0 ; i < c - m + 1 ; i++){
             v = 0;
           mnm = 0;
       if(i - 2 >= 0){
            mnm = D[i - 2] + 1;
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
       if(((i + m) % 3 == 0) && ((i + m) / 3 >= m)){
             if(mnm > D[(i + m) / 3 - m] + 1){
                mnm = D[(i + m) / 3 - m] + 1;
                  v = 4;
            }
       }
       D[i] = mnm;
       B[i] = v;
}
int* K=new int[n - c + 1];
int* M=new int[n - c + 1];
for(int i = 0; i < n - c + 1; i++){
K[i] = 0;
}
for(int i = 0; i <= n - c; i++){
    M[i] = 0;
}
for(int i= 0 ; i < n - c + 1 ; i++){
             v = 0;
           mnm = 0;
       if(i - 2 >= 0){
            mnm = K[i - 2] + 1;
            v = 1;
       }
       if(i - 4 >= 0){
            if(mnm > K[i - 4] + 1){
                mnm = K[i - 4] + 1;
                  v = 2;
            }
       }
       if(i - 5 >= 0){
            if(mnm > K[i - 5] + 1){
                mnm = K[i - 5] + 1;
                  v = 3;
            }
       }
       if(((i + c) % 3 == 0) && ((i + c) / 3 >= c)){
             if(mnm > K[(i + c) / 3 - c] + 1){
                mnm = K[(i + c) / 3 - c] + 1;
                  v = 4;
            }
       }
       K[i] = mnm;
       M[i] = v;
}
if(K[n - c] == 0){
    cout<<"NO";
}
else{
    for(int i = n - c; i > 0; i-=1){
    cout<<M[i]<<" ";
    if(M[i] == 4){
        i = ((i + c) / 3) - c + 1;
        continue;
    }
    if(M[i] == 3){
        i = i - 4;
         continue;
    }
    if(M[i] == 2){
        i = i - 3;
         continue;
    }
    if(M[i] == 1){
        i = i - 1;
         continue;
    }
}
for(int i = c - m; i > 0; i-=1){
    cout<<B[i]<<" ";
    if(B[i] == 4){
        i = ((i + m) / 3) - m + 1;
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
        i = i - 1;
         continue;
    }
}
}
return 0;
}
