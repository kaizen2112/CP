#include<bits/stdc++.h>
#define f(i,n) for(int i=1;i<n+1;i++)
using namespace std;
void sol()
{
    int n, k;
    cin>>n>>k;
    vector<int> vec(n+1);
    vector<int> diff(n+1);
    f(i, n) {
        cin>>vec[i];
        diff[i] = abs(vec[i]-i);
    }  
    int cnt=0;
    f(i, n) {
        if(diff[i]%k!=0) cnt++;
    }
    //cout<<cnt<<endl;
    if(cnt==0) cout<<0<<endl;
    else if(cnt==2) cout<<1<<endl;
    else {
      cout<<-1<<endl;
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