#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
long long sol(int t)
{
    if(t==1 || t==0) return 1;

    return t*sol(t-1);


}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin>>t;
  cout<<sol(t);
  
}