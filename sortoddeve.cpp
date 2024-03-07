#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
#define ll long long 
using namespace std;
void sol()
{
    vector<ll> odd, eve;
    vector<ll> o, e;
    ll n, temp; 
    cin>>n;
    vector<ll> ans(n);
    f(i, n) {
        cin>>temp;
        if(temp%2==0) {
           odd.push_back(temp);
           o.push_back(i);
        }
        else {
           eve.push_back(temp);
           e.push_back(i);
        }
    }
    sort(odd.begin(), odd.end());
    sort(eve.begin(), eve.end());

    ll i=0, j=0;
    for(auto &m: odd) {
        ans[o[i]]=m;
        i++;
    }

    for(auto &n: eve) {
        ans[e[j]]=n;
        j++;
    }
    
    // for(auto &q: ans) {
    //     cout<<q<<" ";
    // }
    // cout<<endl;

    //check
    int flag=0;
    for(int i=1; i<n; i++) {
        if(ans[i]<ans[i-1]) { flag=1; break; }
    }
    if(flag==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;



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