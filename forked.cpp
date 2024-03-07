#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
  int a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;
    map<pair<int, int>, int> mp1, mp2;
    mp1[{xk + a, yk + b}]++;
    mp1[{xk + a, yk - b}]++;
    mp1[{xk - a, yk + b}]++;
    mp1[{xk - a, yk - b}]++;
    mp2[{xq + a, yq + b}]++;
    mp2[{xq + a, yq - b}]++;
    mp2[{xq - a, yq + b}]++;
    mp2[{xq - a, yq - b}]++;
    mp1[{xk + b, yk + a}]++;
    mp1[{xk + b, yk - a}]++;
    mp1[{xk - b, yk + a}]++;
    mp1[{xk - b, yk - a}]++;
    mp2[{xq + b, yq + a}]++;
    mp2[{xq + b, yq - a}]++;
    mp2[{xq - b, yq + a}]++;
    mp2[{xq - b, yq - a}]++;
    int ans = 0;
    for (auto x : mp1)
    {
        int val1 = x.first.first, val2 = x.first.second;
        for (auto y : mp2)
        {
            if (y.first.first == val1 && y.first.second == val2)
                ans++;
        }
       
    }
    
    cout << ans << endl;

}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>t;
  while(t--)
  {
    sol();
  }
}
