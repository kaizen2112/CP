#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n; cin>>n;
    long long arr[n];
    f(i, n) cin>>arr[i];

    for(int i=0; i<n-2; i++) {
         if(arr[i+2]>=arr[i] && arr[i+1]>=2*arr[i]) {
          arr[i+2] -= arr[i];
          arr[i+1] -= 2*arr[i];
          arr[i] = 0; 
         }
         
    }

    f(i, n) {

        //cout<<arr[i]<<" ";
        if(arr[i]!=0) {
            cout<<"NO"<<endl;
            return;
        }
    }
    // cout<<endl;
    cout<<"YES"<<endl;
    return;

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