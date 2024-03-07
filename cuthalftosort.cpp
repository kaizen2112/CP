#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
void sol()
{
    int n;
    cin>>n;
    ll a[n];
    f(i, n) cin>>a[i];

    // int cnt = 0, flg = 1;
    // for(int i = n-2; i >= 0; i--){
    //     if(a[i+1] == 0){
    //         flg = 0; break;
    //     }
    //     while(a[i] >= a[i+1]) a[i] /= 2, cnt++;
    // }
    // cout << (flg ? cnt : -1) << endl;

    int flag=0, cnt=0;

    ll i, w;
    // cout<<a[n-2]<<endl<<endl;
    for(i=n-2; i>=0; i--) {

        if(a[i+1]==0) {
            //flag=1; break;
            cout<<-1<<endl;
            return;
        }


        while(true) {
            if(a[i]>=a[i+1]) {
                 a[i] /= 2;
                //  w = a[i]/a[i+1];
                //  a[i] = a[i]/(1<<w);
                 cnt++;
            }
            else break;
        }

        
        
    }
    // while(a[0]>=a[1]) {
    //         a[0] /= 2;
    //         cnt++;
    //         //cout<<"a";
    //     }
    // if(flag==1) cout<<-1<<endl;
    // else cout<<cnt<<endl;
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