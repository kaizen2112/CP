#include<bits/stdc++.h>
#define f(i,n) for(int i=1;i<n+1;i++)
using namespace std;
void sol()
{
    int n, k=0;
    cin>>n;
    int arr[n+1];
    int brr[n+1];
    f(i, n) {
        cin>>arr[i];
        brr[i] = abs(arr[i] - i);
        k = __gcd(brr[i], k);
    }
    cout<<k<<endl;

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