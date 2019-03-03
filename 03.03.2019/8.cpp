#include <iostream>

using namespace std;

int main()
{
    multiset<long long> s;
    int k,t;
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        scanf("%d",&t)
        if(s.size()!=k)
            s.insert(t)
    else
    {
    long long temp=*s.begin();
    s.erase(s.begin());
    s.insert(t+temp);
    }
   }
   while(s.size()>1)
    s.erase(s.begin());
   printf("%lld\n",*s.begin());
    return 0;
}
