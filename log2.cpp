#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int cnt=0;
void sol(long long N)
{
    if(N<=1) return;
    //if(N==i) return;

    cnt++;
    //i=2*i;
    sol(N/2);
}
int main()
{
  long long N, i=1;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>N;
    sol(N);
    cout<<cnt;
}