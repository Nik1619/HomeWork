/* A sequence of positive integers is transmitted through the communication channel
X1,X2 , ... each number doesn't exceed 1000, the number is not known in advance.
Each number is passed as a separate text string containing
decimal notation of the number. Sign of the end of the transmitted sequence
is the number 0. Plot sequence element from XT to XT+N
is called lifting, if in this area next to each number more
previous. The lifting height is called the difference XT+N-XT. Write
an efficient program that calculates the highest height among all
sequence lifts. If there are none in the sequence
rise, the program gives 0. The program should print a report on
following form:
... numbers have received
Highest lift height is … */
#include <iostream>
using namespace std;
int main(){
int liftm = 0;
int lift = 0;
int* x = new int[2];
int n = 1;
cin>>x[0];
while(x[0] != 0){
    cin>>x[1];               //this takes O(n) because this time is needed to create an array of two elements and to fill it and to complete n steps of a cycle, when each step takes the same static time.
    n++;
    if((x[0] < x[1])){
        lift = lift + x[1] - x[0];
    }
    else{
        if(lift > liftm){
            liftm = lift;
            lift = 0;
        }
        else{
            lift = 0;
        }
    }
    x[0] = x[1];
}
cout<<n<<" numbers have received ";
cout<<"Highest lift height is "<<liftm;

return 0;
}
