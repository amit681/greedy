bitset

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
ll n,m;
cin>>n>>m;
vector<ll> v;
ll i,j;
for(i=0;i<n;i++)
{
string str;
cin>>str;
bitset<32> b(str);
//cout<<b.to_ulong()<<endl;
v.push_back(b.to_ulong());

}
ll ma=v[0],idx=0;
for(i=1;i<v.size();i++)
{
if(v[i]>ma)
{
ma=v[i];
idx=i;
}
}
cout<<idx+1<<endl;

return 0;
}


https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/binary-matrix-1-d77d7d00/