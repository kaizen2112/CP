#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
  int a, b, c;
  cin>>a>>b>>c;
  if((a*a+b*b)<(c*c)) cout<<"Yes";
  else cout<<"No";
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    sol();
}