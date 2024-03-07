#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n; cin>>n;
    double sum=0, x[n];
    f(i, n) {
        cin>>x[i];
        sum+=x[i];
    }
    cout<<setprecision(10)<<sum/n<<endl;


}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
    sol();
  
}