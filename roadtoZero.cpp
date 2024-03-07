#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    long long x, y, a, b, amount=0;
    cin>>x>>y>>a>>b;

    if(b<2*a) {
        while(x!=0 || y!= 0) {
            y--; x--;
            amount += b;
        }
        if(x==0) {
            while(y!=0) {
            y--;
            amount += a;
            }
        }
        else {
            while(y!=0) {       
            y--;
            amount += a;
            }

        }
    }
    else {
        while(x!=0) {
            x--;
            amount += a;
        }
        while(y!=0) {
            y--;
            amount += a;
        }
    }
    cout<<amount<<endl;
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