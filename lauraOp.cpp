#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int a, b, c;
    cin>>a>>b>>c;
    if(abs(b-c)%2==0) cout<<1<<" ";
    else cout<<0<<" ";

    if(abs(a-c)%2==0) cout<<1<<" ";
    else cout<<0<<" ";
    
    if(abs(a-b)%2==0) cout<<1<<" ";
    else cout<<0<<" ";

    cout<<endl;


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