#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n; cin>>n;
    long long arr[n], sum=0;
    f(i, n) cin>>arr[i];
    sort(arr, arr+n);
    for(int i=1; i<n; i++)  {
        sum += arr[i]-arr[i-1];
    }
    cout<<sum<<endl;

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