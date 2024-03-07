#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol(int t)
{

    if (t == 0)
        return;

    sol(t - 1);
    cout << t <<endl;
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;

    sol(t);
}