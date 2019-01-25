/* */
#include <iostream>
using namespace std;
int main()
{
int n;
int m;
cin >> n;
cin >> m;
int* D=new int[n - m + 1];
for(int i = 0; i < n - m + 1; i++){
D[i] = 0;
}
D[0] = 1;
for(int i= 0 ; i < n - m + 1 ; i++){
       if(i + m - 9 >= m){                                                //this takes O(n - m + 1) because this time is needed to create an array and to complete n - m steps of a cycle, when each step takes the same static time.
            if(D[i] > 0){
                D[i] = D[i] + D[i - 9];
            }
            else{
        D[i] = D[i - 9];
            }
       }
       if((i + m) * (i + m) <= n){
             if(D[(i + m) * (i + m) - m] > 0){
                D[(i + m) * (i + m) - m] = D[(i + m) * (i + m) - m] + D[i];
            }
            else{
        D[(i + m) * (i + m) - m] = D[i];
            }
       }
       if(((i + m - 1) / 10 >= m) && (((i + m - 1) % 10) == 0)){
             if(D[(i + m - 1) / 10 - m] > 0){
                D[i] = D[(i + m - 1) / 10 - m] + D[i];
            }
            else{
        D[i] = D[(i + m - 1) / 10 - m];
            }
       }
        if(((i + m) % 7 == 0) && ((i + m) / 7 >= m)){
             if(D[i] > 0){
                D[i] = D[i] + D[(i + m) / 7 - m];
            }
            else{
        D[i] = D[(i + m) / 7 - m];
            }
       }
}
if(D[n - m] == 0){
cout<<"NO";
}
else{
    cout<<"YES";
}
return 0;
}
