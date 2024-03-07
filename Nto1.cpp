#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol(int t)
{
    
    cout<<t;
    if(t!=1) {
        cout<<" ";

    }

    if (t == 1)
        return;
    t--;
    sol(t);
    
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    sol(t);
}