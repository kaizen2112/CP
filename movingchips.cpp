#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n;
    cin>>n;
    int arr[n];
    bool start=false;
    int s=0, e=0;
    f(i, n) {
        cin>>arr[i];
        if(arr[i]==1 && start==false) {
            s=i;
            start=true;
        }

        if(arr[i]==1) {
            e=i;
        }

    }
    //cout<<s<<" "<<e<<endl;

    int cnt=0;
    for(int i=s; i<e; i++) {
          if(arr[i]==0) cnt++;
    }
    cout<<cnt<<endl;






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