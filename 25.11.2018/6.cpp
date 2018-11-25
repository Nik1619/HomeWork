/*Напишите программу, находящую все простые числа Ченя не превосходящие n.
Программа должна работать не более чем за O(n*log log n) шагов. */
#include <iostream>
#include <stdio.h>
using namespace std;
int ok(int a)
{
    for (int k=2;k*k<=a;k++)
        if ((a%k)==0)
         return 0;
        else return 1;
}
int main()
{
int n;
scanf("%d",&n);
for (int k=3;k<=n;k++)
{
if (ok(k)==1)
{

        if (ok(k+2)==1)
    {
         printf("%d\n",k);
    }
    for (int j=2;j<=k+2;j++)
    {
        int q=(k+2)/j;
        if (ok(q)==1)
            printf("%d\n",k);
    }
}
}
    return 0;
}