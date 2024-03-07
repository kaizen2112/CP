#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n;
    cin>>n;
    long long occ[n], year=0;
    f(i, n) cin>>occ[i];

    year = occ[0];
    for(int i=1; i<n; i++) {
        if(occ[i]==year) year += occ[i];
        else if(occ[i]<year) year = occ[i]*(year/occ[i]) + occ[i];
        else year = occ[i];














        // if(occ[i]<=year) year += occ[i];
        // else if(occ[i]>year) year = occ[i];
        // //else if(occ[i]==year) year += occ[i];
        // // else if(occ[i]>=year) year += occ[i];
        // // else year = occ[i];
    }
    cout<<year<<endl;

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