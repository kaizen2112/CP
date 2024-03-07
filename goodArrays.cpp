#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    long long n, sum1=0, sum2=0;  cin>>n;
    long long a[n]; f(i, n) cin>>a[i];

    if(n==1) {
        cout<<"NO"<<endl;
        return;
    }
    
    f(i, n) {
        if(a[i]==1) {
            sum1++;
        }
        else {
            sum2 += a[i]-1;
        }
    }
    if(sum1<=sum2) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }

    // if(sum1<=n/2) {
    //     cout<<"YES"<<endl;
    // }
    // // if(sum2>=sum1) {
    // //     cout<<"YES"<<endl;
    // // }
    // else {
    //     if(sum2>=sum1) {
    //     cout<<"YES"<<endl;
    //     return;
    // }
    //     cout<<"NO"<<endl;
    // }

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