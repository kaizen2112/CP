#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    long long a, b, n, i=0, cnt=0, ok;
    cin>>a>>b>>n;
    long long x[n];
    f(i, n) cin>>x[i];

    ok=b;
    while(i<n) {
        //     if(b==1) {
        //         b = min(b+x[i], a);      
        //         i++;
        //     }
        // b--;
        // cnt++;
        ok += min(a-1, x[i]);
        i++;
    }
    cout<<ok<<endl;
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