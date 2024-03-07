#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n, cnt=0; cin>>n;
    int a[n];
    f(i, n) cin>>a[i];

    int pref[n]; 
    pref[0]=a[0];
    for(int i=1; i<n; i++) {
        pref[i] = pref[i-1] + a[i];
    } 

    //f(i, n) cout<<pref[i]<<" ";

    int l=0, r=n-1;
    while(l<r) {
        while(l<r) {
        int diff = pref[r] - pref[l];
        f(i, n) {
            if(diff==a[i]) cnt++;
        }
        r--;
        }
        l++;
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