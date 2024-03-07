#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n; cin>>n;
    int a[n], sum=0, cnt=0;
    f(i, n) {
        cin>>a[i];
        if(a[i]%3==1) cnt++;
        sum += a[i];
    }
    if(sum%3==0) cout<<0<<endl;
    else if(sum%3==2) cout<<1<<endl;
    else if(sum%3==1) {
        if(cnt>=1) {
            cout<<1<<endl;
        }
        else cout<<2<<endl;
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