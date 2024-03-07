#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    long long n, k, sum=0, cnt=1; cin>>n>>k;
    vector<long long> a(n); f(i, n) cin>>a[i];
    vector<long long> b;
    sort(a.begin(), a.end());
    int j=0;
    for(int i=1; i<n; i++) {
        if((a[i]-a[i-1])<=k)  cnt++;
        else {
            b.push_back(cnt);
            cnt=1;  
        }
    } 
    b.push_back(cnt);
   
    sort(b.begin(), b.end(), std::greater<int>());
    for(int i=1; i<b.size(); i++) {
        sum += b[i];
    }
    cout<<sum<<endl;
    
    
    // for(int i=0; i<b.size(); i++) {
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl;

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