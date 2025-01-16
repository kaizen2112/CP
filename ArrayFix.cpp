#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n; cin>>n;
    int arr[n]; 
    f(i, n) {
        cin>>arr[i];

        if(i>0) {
            if(arr[i-1]>arr[i]) {
                //10, 9
                if(arr[i]<10 && arr[i-1]<10) {
                     cout<<"NO"<<endl;
                     return;
                }
                else if(arr[i]>=10 && arr[i-1]>=10) {
                    cout<<"NO"<<endl;
                }
                else if(arr[i]<10 && arr[i-1]>=10) {
                    if(!(arr[i-1]/10 <= arr[i-1]%10 && arr[i-1]%10 <= arr[i])) {
                        cout<<"NO"<<endl;
                        return;
                    }
                }
                else if(arr[i]>=10 && arr[i-1]>=10) {
                     if(!()) {
                       cout<<"NO"<<endl;
                       return;
                    }
                }


            }

        }

    }
      
    // for(int i=1; i<n; i++) {
    //     if(arr[i]<arr[i-1]) {
    //         if(arr[i]/10==0 && arr[i-1]/10==0) {
    //             cout<<"NO"<<endl;
    //             return;
    //         }
    //         else if(arr[i]/10==0 && arr[i-1]/10!=0) {
    //             if(!(arr[i-1]/10 <= arr[i-1]%10 && arr[i-1]%10 <= arr[i])) {
    //                 cout<<"NO"<<endl;
    //                 return;
    //             }
    //         }
    //         else if(arr[i]/10!=0 && arr[i-1]/10!=0){
    //             if(!((arr[i-1]/10 <= arr[i-1]%10 && arr[i-1]%10 <= arr[i]/10 && arr[i-1]/10 <= arr[i]%10) || (arr[i-1]/10 <= arr[i-1]%10 && arr[i-1]%10 <= arr[i]))) {
    //                 cout<<"NO"<<endl;
    //                 return;
    //             }

    //         }
    //     }

    // }
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