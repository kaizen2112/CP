#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n, cnt=0;
    cin>>n;
    for(int i = 0; i < 21; i++) {
              if((n>>i) & 1) {
    
                cnt++;
              }
    }
    cout<<(1<<cnt)-1;

}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
    sol();

}