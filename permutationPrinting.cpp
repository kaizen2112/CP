#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n;
    cin>>n;
    int arr[n];
    f(i, n) arr[i] = i+1;

    

    for(int i=0; i<n; i++) {
        for(int j=0; j<n-1; j++) {
          if((arr[j]%arr[i]==0 && arr[j+1]%arr[i+1]==0) || (arr[j]%arr[i]==0 && arr[j+1]%arr[i+1]==0)) swap(arr[j], arr[j+1]);
          else continue;
        }
    }

    f(i, n) cout<<arr[i]<<" ";

    cout<<endl;


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