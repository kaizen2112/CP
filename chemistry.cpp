#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;

void sol()
{
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    n = s.size();

    map<char, int> m;
    for(auto p: s) {
        m[p]++;
    }

    int odd=0, eve=0, cnt=0;

    for(auto q: m) {
        cnt += q.second%2;
    }
    if(cnt>k) {
        if(cnt-k==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
    }





    

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