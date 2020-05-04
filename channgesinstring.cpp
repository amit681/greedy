//stack

#include<bits/stdc++.h>
using namespace std;
int check(string s,int n)
{
    int i=0,res=0;
    stack<int>st;
    while(s[i]=='A')
    i++;
    if(i==s.length())
    return 0;
    while(s[i]=='B')
    {
        st.push(s[i]);
        i++;
    }
    if(i==s.length())
    return 0;
    for(;i<n;i++)
    {
        if(!st.empty()&&s[i]=='A')
        {
            st.pop();
            res++;
        }
        if(s[i]=='B')
        st.push(s[i]);
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<check(s,n)<<endl;
    }
}



https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/ab-string-5f6b213a/