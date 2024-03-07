#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int sol()
{
  int a, b, c, sum;
  int x=0, y=0;
  cin>>a>>b>>c;
  for(x=0;(a*x+b*y)<=c;x++)
  {
  
    for(y=0;(a*x+b*y)<=c; y++)
    {
      //cout <<x << " " << y <<endl;
        if(a*x+b*y==c){ return 1; }
    }
    y=0;
  }
  return 0;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
    if(sol()==1) cout<<"YES";
    else cout<<"NO";
}