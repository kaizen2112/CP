#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    long long n, k; cin>>n>>k;
    vector<pair<long long, long long>> x(n);
    vector<long long> b(n), ok(n);
    f(i, n) {
        cin>>x[i].first;
        x[i].second = i;
    }
    f(i, n) {
        cin >> b[i];
    }
    sort(x.begin(), x.end());
    sort(b.begin(), b.end());

    f(i, n){
        ok[x[i].second] = b[i];
    }

    f(i, n) cout<<ok[i]<<" ";

    cout<<endl;
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