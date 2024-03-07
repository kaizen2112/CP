#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int sol(int n)
{
    if(n==0) return 0;
    else cout<<"I love Recursion"<<endl;
    n--;
    sol(n);
}
int main()
{
  int n;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin>>n;
  
  sol(n);
  
}