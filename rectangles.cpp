#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    long long a, b;
    int flag=0;
    cin>>a>>b;
    if((a*2==b) || (a%2==0 && a/2==b)) {
        //cout<<"NO"<<endl;
        flag=1;
    }
    
 
    if(a==1 && b==1) flag=1;
 
    if(flag==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return;
 
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