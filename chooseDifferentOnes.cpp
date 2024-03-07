#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n, m, k; 
    cin>>n>>m>>k;
    // vector<int> vec1(n), vec2(m);
    map<int, int> mp;
    int temp;
    f(i, n) {
        cin>>temp;
        mp[temp]=1;
    }
    f(i, m) {
        cin>>temp;
        if(mp[temp]==1) mp[temp]=4;
        else if(mp[temp]==0) mp[temp]=2;
    }

    int a=k/2, b=k/2;
    for(int i=1; i<=k; i++) {
        if(mp[i]==1) a--;
        else if(mp[i]==2)  b--;
        else if(mp[i]==0)  {
            cout<<"No"<<endl;
            return;
        }
    }
    if(a>=0 && b>=0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


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