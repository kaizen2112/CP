#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n, i=0;
    cin>>n;
    if(n%2!=0) {
        cout<<"NO"<<endl;
        return;
    }
    else {
        cout<<"YES"<<endl;
        for(int p=0; p<n; p=p+2) {
            cout<<char('A'+i)<<char('A'+i);
            i++;
        }
    }
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