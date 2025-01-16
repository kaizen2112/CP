#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n, cnt=0;
    cin>>n;
    int a[n], b[n];
    f(i, n) {
        cin>>a[i]; b[i]=a[i];
    }
    sort(b, b+n);
    int m = ceil(n/2.0);
    // cout<<m<<endl;
    b[m-1] = b[m-1]+1; cnt++;

    for(int i=m; i<n; i++) {
        if(b[i]<b[i-1]) {
            b[i] = b[i]+1;
            cnt++;
        }
        else break;

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