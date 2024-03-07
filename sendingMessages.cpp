#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    long long n, f, a, b, phase;
    cin>>n>>f>>a>>b;
    vector<long long> moments(n+1);
    for(int i=1;i<=n;i++)  cin>>moments[i];

    for(int i=1; i<=n; i++) {
        phase = moments[i]-moments[i-1];
        f -= min(phase*a, b);
    }
    if ( f<=0) cout<<"NO"<<endl;
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