#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n, k;
    cin>>n>>k;
    int check = (n*(n-1))/2 - k;
    
    if(k>=n-1) cout<<1<<endl;
    else cout<<n<<endl;

}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>t;
  while(t--)
  {
    sol();
  }
}