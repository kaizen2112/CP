#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    long long arr[3], cnt=0;
    cin>>arr[0]>>arr[1]>>arr[2];

    sort(arr, arr+3);
    if(arr[0]==arr[1] && arr[1]==arr[2]) 
    {
        cout<<"YES"<<endl;
        return;
    }
    else if ((arr[1]%arr[0])!=0 || (arr[2]%arr[0])!=0) {
        cout<<"NO"<<endl;
        return;
    }
    else {
        // while(arr[1]>arr[0]) {
        //     arr[1] = arr[1]- arr[0];
        //     cnt++;
        // }
        // //cout<<cnt;
        // while(arr[2]>arr[0]) {
        //     arr[2] = arr[2] - arr[0];
        //     cnt++;
        // }
        // //cout<<cnt;

        cnt = arr[1]/arr[0] + arr[2]/arr[0] -2;
    }

    //cout<<cnt<<endl;

    if(cnt>3) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

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