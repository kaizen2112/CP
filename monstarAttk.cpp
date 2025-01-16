#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
  int n, k;
  cin >> n >> k;
  int a[n], x[n];
  f(i, n) cin >> a[i];
  f(i, n)
  {
    cin >> x[i];
    x[i] = abs(x[i]);
  }

  map<int, int> mp;
  f(i, n)
  {
    mp[x[i]] += a[i];
  }

  int ammo = k;
  int pos = 0, hit;

  for (auto m : mp)
  {
    // if pos== cot
    if (m.second != 0)
      hit = m.first;
    if (pos >= hit)
    {
      cout << "NO" << endl;
      return;
    }

    if (m.second >= ammo)
    {
      m.second -= ammo;
    }
    else
    {
      while (ammo != 0)
      {
      }
    }
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