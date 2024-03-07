#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    long long n, l;
    cin>>n>>l;
    long long loc[n];
    long long dis[n+1];
    f(i, n) cin>>loc[i];

    // f(i, n) cout<<loc[i]<<" ";

    sort(loc, loc+n);

    // f(i, n) cout<<loc[i]<<" ";

     
    for(int i=0; i<n-1; i++) {
        dis[i]=loc[i+1]-loc[i];
    }
    dis[n-1] = 2*loc[0];
    dis[n] = 2*(l-loc[n-1]);
    // for(int i=0; i<n+1; i++) {
    //     cout<<dis[i]<<endl;
    // }


    double range = 0.5*(*max_element(dis, dis+(n+1)));
    cout<<fixed <<setprecision(10)<<range<<endl;

}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
    sol();
  
}