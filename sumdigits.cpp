#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define f(i,n) for(int i=0;i<n;i++)
#define INF 1e18
#define MOD 1000000007
const int N = 2e5+1;
void pre(int sum[]) {
    
  int k, ss=0;
  for(int i=1; i<=N; i++) {
    k=i;
    while(k!=0) {
        ss += k%10;
        k/=10;
    }
    sum[i]=ss;
  }
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  
  int sum[N+1];

  pre(sum);


  cin.tie(NULL);
  cin>>t;
  while(t--)
  {
    int n; cin>>n; 
    cout<<sum[n]<<endl;

    // for(int i=0; i<20; i++) cout<<sum[i]<<endl;
  }
}