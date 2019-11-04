#include <set>
#include <vector>
#include <string>
using namespace std;

map<string,set<string» mp;
string s;
set <string> t;
vector <char> a;
int l,n;

void f(string temp)
{
if(temp.size()==l)
t.insert(temp);
for(int i=0;i<n;i++)
{
s=temp+a[i];
f(s);
}
}

int main() 
{
string s1,s2,s3;
scanf(“%d%d”,&n,&l);
a.resize();
for(int i=0;i<n;i++)
scanf(“%d”,a[i]);
f(s1);
for(auto& x : t)
{
for(int i=0;i<x.length();i++){
if(i!=x.length()-1)
s2+=x[i];
if(i!=0)
s3+=x[i];
}
mp[s2].insert(s3);
s2.clear();
s3.clear();
}
for(auto& x:mp){
cout«x.first;
for(auto& y:x.second) cout«y;
} 
