#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    long long n, k, x, ok=0, flag=0, cnt=0, minn, maxx;
    cin>>n>>k>>x;
    minn = k*(k+1)/2;
    maxx = n*(n+1)/2 - (n-k)*(n-k+1)/2;

    if(x>=minn && x<=maxx) cout<<"YES"<<endl;
    else cout<<"NO"<<endl; 
    
    
    
    // ok=x;
    // while(ok>0) {
    //     if(ok<n) n=ok;

    //     ok -= n;
    //     cnt++;
    //     n--;
    //     if(ok==0 || cnt==k) {
    //         break;
    //     }
    // }
    // if(ok==0 && cnt==k) cout<<"YES"<<endl;
    // else cout<<"NO "<<cnt<<" "<<ok<<endl;

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