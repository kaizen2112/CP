#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int cnt=0;
void sol(int n)
{
    cnt++;
    if(n==1) return;

    if(n%2==0) n/=2;
    else if(n%2!=0) n=3*n+1;

    sol(n);

}
int main()
{
  int n;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>n;
   sol(n);
   cout<<cnt;

}