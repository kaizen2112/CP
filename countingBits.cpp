#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n, cnt=0;
    cin>>n;
    int ways=0;
    for(int mask=1; mask<=n; mask++) {

        
            for(int i = 0; i < 12; i++) {
              if((mask>>i) & 1) {
    
                cnt++;
              }
        }

        
    }
    cout<<cnt << endl;
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