#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
  int a, b, c;
  cin>>a>>b;
  if(a>b) {
    c = a;
    if(--a>b) { c+=a; }
    else c+=b;
  }
  else {
    c = b;
    if(--b>a) { c+=b; }
    else c+=a;
  }
  cout<<c;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  sol();
}