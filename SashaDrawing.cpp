#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    long long n, k;
    cin>>n>>k;
    if(k<=4*n-4) cout<<(k+1)/2<<endl;
    else if(k==4*n-3){
        cout<<(k+1)/2<<endl;
    }
    else if(k==4*n-2){
        cout<<(k+2)/2<<endl;
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