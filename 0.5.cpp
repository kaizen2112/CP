#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
  float f;
  cin>>f;
  if(f-0.5>=floor(f)) cout<<(int)ceil(f);
  else cout<<(int)floor(f);
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
    sol();
}