#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
int x,y,b;
printf("enter x\n");
scanf("%d",&x);
printf("enter y\n");
scanf("%d",&y);
int a[y-x];
if (x==1)
{
for (int i=x;i<=y;i++)
{
a[x]=1;
if(((i%2)==0)&&((i%3)==0))
a[i]=a[i/2]+a[i-1]+a[i/3];
if (((i%3)!=0)&&((i%2)==0))
a[i]=a[i/2]+a[i-1];
if(((i%3)==0)&&((i%2)!=0))
a[i]=a[i/3]+a[i-1];
if (((i%3)!=0)&&((i%2)!=0))
a[i]=a[i-1];
if(i==y)
printf("%d",a[i]);
}
}
else
{
for (int k=x;k<=y;k++)
{
a[x]=1;
b=k/x;
if (((b%2)==0)&&((b%3)!=0))
a[k]=a[k/2]+a[k-1];
if (((b%2)==0)&&((b%3)==0))
a[k]=a[k/2]+a[k/3]+a[k-1];
if (((b%2)!=0)&&((b%3)==0))
a[k]=a[k/3]+a[k-1];
if (((b%2)!=0)&&((b%3)!=0))
a[k]=a[k-1];
if(k==y)
printf("%d",a[k]);
}
}
return 0;
}
