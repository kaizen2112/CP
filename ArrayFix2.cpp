#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n; cin>>n;
    int arr[n]; 
    f(i, n)   cin>>arr[i];

    vector<int> num;
    if(arr[0]>9 && arr[0]/10 <= arr[0]%10) {
            num.push_back(arr[0]/10);
            num.push_back(arr[0]%10);
            arr[0]= arr[0]%10;
    }
    else {
            num.push_back(arr[0]);
    }

    for(int i=1; i<n; i++) {
        if(arr[i]>9 && arr[i-1] <= arr[i]/10 && arr[i]/10 <= arr[i]%10) {
            num.push_back(arr[i]/10);
            num.push_back(arr[i]%10);
            arr[i] =arr[i]%10;
        } 
        else {
            num.push_back(arr[i]);
        }
    }
    // for(auto p: num) {
    //     cout<<p<<" ";
    // }
    // cout<<" "<<num.size();
    // cout<<endl;
    for(int i=1; i<num.size(); i++) {
        if(num[i]<num[i-1]) {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

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