#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n, m, k, cnt=0;
    cin>>n>>m>>k;
    int a[n], b[m];
    f(i,n) cin>>a[i];
    f(i,m) cin>>b[i];

    sort(a, a+n);
    sort(b, b+m);
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(a[i]+b[j]<=k) {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;

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