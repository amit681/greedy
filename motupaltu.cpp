motupatlu backtracing 

#include<bits/stdc++.h>
using namespace std;
#define speed ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
speed;
int t ;
cin>>t;
while(t--)
{
int n,flg=0;
cin>>n;
if(n==1)
{cout<<"1 0\nMotu"<<endl;
flg=1;
}
long long int a[n],i=0,j=n-1;
for(int i=0;i<n;i++)cin>>a[i];
long long int m[n],p[n],sum=0;
for(i=0;i<n;i++)
{ sum=sum+a[i];
m[i]=sum;
}
sum=0;
for(i=n-1;i>=0;i--)
{ sum=sum+2*a[i];
p[n-1-(i)]=sum;
}
 
long long M=0,P=0,k,l,f=1,h=1;
while(f+h<n)
{ k=m[M];
l=p[P];
 
if(k<=l)
{
f++;
M++;
 
}
else
{P++;
h++;
}
}
if(flg==0)
cout<<f<<" "<<h<<endl;
if(h<f && flg==0)
cout<<"Motu"<<endl;
else if(h>f && flg==0)
cout<<"Patlu"<<endl;
else if(h==f && flg==0)
cout<<"Tie"<<endl;
 
}
 
 
return 0;
}


https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/motu-and-patlu-1-ab612ad8/