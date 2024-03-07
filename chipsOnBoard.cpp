#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
#define INF 10000000000000
void sol()
{
    int n; cin>>n;
    long long rmn, clm, sum1=0, sum2=0; 
    vector<long long>a(n); f(i,n) cin>>a[i]; 
    vector<long long>b(n); f(i,n) cin>>b[i];

    clm = *min_element(begin(b), end(b));
    f(i, n) {
        sum1 += a[i] + clm;
    }

    rmn = *min_element(begin(a), end(a));
    f(i, n) {
        sum2 += b[i] + rmn;
    }

    cout<<min(sum1, sum2)<<endl;
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