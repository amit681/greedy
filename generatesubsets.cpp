generating subsets


#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int v,c,f,p,i;
cin>>v>>c>>f>>p;
int n;
cin>>n;
int a[n][4];
for(i=0;i<n;i++)
{
for(int j=0;j<4;j++)
cin>>a[i][j];
}
for(i=0;i<(1<<n);i++)
{int sumv =0,sumc =0,sumf=0,sump=0;
for(int j=0;j<n;j++)
{
if(i & (1<<j))
{
sumv+=a[j][0];
sumc+=a[j][1];
sumf+= a[j][2];
sump+=a[j][3];
}
}
if(sumv == v && sumc==c && sumf==f && sump==p)
{
cout<<"YES";
break;
}
}
if(i==(1<<n))
cout<<"NO";
return 0;
}

https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/eat-or-not-22/