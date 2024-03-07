#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol(int t, int p)
{
    if(t==0) return;
    for(int i=0; i<p; i++) {
        cout<<" ";
    }
    for(int i=0; i<2*t-1; i++) {
        cout<<"*";
    }cout<<endl;
 
    sol(t-1,p+1);
    


}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin>>t;
  sol(t,0);
  
}