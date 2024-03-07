#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n; cin>>n;
    long long arr[n];
    int flag=0;
    f(i, n) {
        cin>>arr[i];
    }
    
    for(int i=1; i<n; i++){
        if(arr[i]== arr[i-1] && arr[i]!=0) {
            flag=1;
            break;
        } 
    }
    if(flag==1) cout<<"SQUARE"<<endl;
    else cout<<"TRIANGLE"<<endl;

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