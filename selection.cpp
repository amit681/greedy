selection in minimum trials


#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
long long int a[3],ans,t1,t2;
cin>>a[0]>>a[1]>>a[2];
sort(a,a+3);
ans=a[1];
t1=a[2]-a[1];
if(t1%2==0)
{
t2=t1/2;
}else{
t2=t1/2+1;
}
cout<<ans+t2<<endl;

return 0;
}

https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/dorsplen/