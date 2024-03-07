#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n, s;
    cin>>n;
    int min[n];
    f(i, n) {
        int x, y;
        cin>>x>>y;
        min[i] = x + ceil((y-1)/2);
    }
    sort(min, min+n);
    cout<<min[0]<<endl;


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