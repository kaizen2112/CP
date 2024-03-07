#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    long long l, r;
    cin>>l>>r;
    if(2*l<=r) {
        cout<<l<<" "<<2*l<<endl;
    }
    else {
        cout<<-1<<" "<<-1<<endl;
    }

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