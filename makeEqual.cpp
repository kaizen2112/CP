#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n; 
    cin>>n;
    long long val,p, sum=0, arr[n];
    f(i, n) {
        cin>>arr[i];
        sum += arr[i];
    }
    val = sum/n;
    if(n==1) {
        cout<<"YES"<<endl;
        return;
    }
    f(i, n) {
       arr[i] -= val;
    }
    // f(i, n) cout<<arr[i]<<" ";

    // cout<<endl;
     
    sum=0; 
    f(i, n) {
        if(sum==0 && arr[i]<=0) continue;

        sum += arr[i];
        if(sum<0) {
            sum = -1;
            break;
        }
    }
    //cout<<sum<<endl;

    // for(int i=0; i<n-1; i++) {
    //     if(arr[i]<=0) continue;
    //     for(int j=i+1; j<n; j++) {
    //         if(arr[j]>=0) continue;

    //         p = min(arr[i], -arr[j]);
    //         arr[i] -= p;
    //         arr[j] += p;
    //     }
    // }

    // // f(i, n) cout<<arr[i]<<" ";
    // sum=0;
    // f(i, n) {
    //     sum += abs(arr[i]);
    // }

    if(sum==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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