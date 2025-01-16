#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b && b>c) cout<<"PEAK"<<endl;
    else if(a<b && b<c) cout<<"STAIR"<<endl;
    else cout<<"NONE"<<endl;

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