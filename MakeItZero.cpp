#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n, k; cin>>n;
    int arr[n]; f(i, n) cin>>arr[i]; 

    if(n%2==0) {
      k=2;
      cout<<k<<endl;
      cout<<1<<" "<<n<<endl;
      cout<<1<<" "<<n<<endl;
    }
    else {
      k=4;
      cout<<k<<endl;
      cout<<1<<" "<<n-1<<endl;
      cout<<1<<" "<<n-1<<endl;
      cout<<n-1<<" "<<n<<endl;
      cout<<n-1<<" "<<n<<endl;
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