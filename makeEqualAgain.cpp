#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n; cin>>n;
    int arr[n], neww[n]; 
    f(i, n) cin>>arr[i];
    int i, j, cnt1, cnt2;
    for(i=0; i<n; i++) {
        if(arr[i]!=arr[0]) break;
    }
    for(j=n-1; j>i; j--) {
        if(arr[j]!=arr[0]) break;
    }
    cnt1 = j-i+1;
    for(j=n-1; j>=0; j--) {
        if(arr[j]!=arr[n-1]) break;
    }
    for(i=0; i<j; i++) {
        if(arr[i]!=arr[n-1]) break;
    }
    
    cnt2 = j-i+1;

    cout<<min(cnt1, cnt2)<<endl;

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