#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) {
        if(i%2!=0) {
            for(int j=1; j<=n; j++) {
            if(j%2!=0) cout<<"##";
            else cout<<"..";
        } cout<<endl;
        for(int j=1; j<=n; j++) {
            if(j%2!=0) cout<<"##";
            else cout<<"..";
        }

        }
        else {
            for(int j=1; j<=n; j++) {
            if(j%2!=0) cout<<"..";
            else cout<<"##";
        } cout<<endl;
        for(int j=1; j<=n; j++) {
            if(j%2!=0) cout<<"..";
            else cout<<"##";
        }
        }
        
        cout<<endl;
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