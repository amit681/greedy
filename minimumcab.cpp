minimun number of cabs

#include <bits/stdc++.h>
using namespace std;
const int MAX = 1500;
int A[MAX];
int main()
{

    int n, hh1, hh2, mm1, mm2, smins, emins, ans;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> hh1 >> mm1 >> hh2 >> mm2;
        smins = hh1 * 60 + mm1;
        emins = hh2 * 60 + mm2;
        A[smins]++;
        A[emins+1]--;
       // cout<<A[smins]<<" "<<A[emins+1]<<endl;
    }
    ans = A[0];
    for (int i = 1; i < MAX; i++) {
        A[i] += A[i-1];
        ans = max(ans, A[i]);
    }
    cout << ans << endl;
    return 0;

}


https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/minimum-cabs-0798cfa5/