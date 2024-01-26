#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    // int n;
    // cin>>n;
    // cout<<floor(log2(n)+1);
    int m, k, l;
    cin>>m>>k;
    l = (floor(log2(m)+1));

    cout<<((((1<<l)-1)<<k) & m); 


}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
    sol();
 
}