#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    n--;
    cout<<(2*n*(n+1)/2)+(n+1)*3+2<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}