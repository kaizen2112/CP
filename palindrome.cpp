#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int sol(int n, int i, long long arr[])
{
    if(i>=n) return 1;

    if(arr[i]!=arr[n]) return 0;

    sol(n-1, i+1, arr);
    //return 1;


}
int main()
{
  int n, i=0;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>n;
  long long arr[n];
  f(i,n) cin>>arr[i];
    if(sol(n-1, i, arr)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    cout<<n<<endl;

    return 0;
}