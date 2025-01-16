#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
    long long n, k, result;
    cin >> n >> k;
    if (n>k) {
        //cout<<(2*k+n-1)/n<<endl;
        (n%k==0) ? cout << "1" << endl: cout <<"2" << endl;
    }
    else 
    {
        cout<<(k+n-1)/n<<endl;
    }
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        sol();
    }
}