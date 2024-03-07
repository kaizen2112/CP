#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n;
    cin>>n;
    vector<pair<int, int>> perm(n);

    f(i, n) cin>>perm[i].first;
    f(i, n) cin>>perm[i].second;

    //f(i, n) cout<<perm[i].first<<perm[i].second<<endl;

    sort(perm.begin(), perm.end());

    f(i, n) cout<<perm[i].first<<" ";

    cout<<endl;
    f(i, n) cout<<perm[i].second<<" ";
     
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