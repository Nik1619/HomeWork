/* */
#include <iostream>
using namespace std;
int main(){
int sum;
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
sum = mnm + y;
x[0] = y;
for(int i = 6; i < n; i++){
    cin>>y;
    if(x[i % 5] < mnm){
        mnm = x[i % 5];
    }
    if(sum > mnm + y){
        sum = mnm + y;
    }
    x[i % 5] = y;
}
cout<<sum;
return 0;
}
