#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int a=0, b=1;
int sol(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 1;
  
    return sol(n-1)+sol(n-2);

}
int main()
{
  int n;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>n;
  int nth=0;

  cout<<sol(n-1);
}