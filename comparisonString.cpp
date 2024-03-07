#include<bits/stdc++.h>
#define f(i,n) for(int i=1;i<n;i++)
using namespace std;
void sol()
{
    int n; cin>>n;
    string s; cin>>s;

    int cnt=2, maxx=0;

    if(n==1) {
        cout<<cnt<<endl;
        return;
    }
    f(i, n) {
        if(s[i]==s[i-1]) {
            cnt++;
            if(cnt>maxx) maxx=cnt;
        }
        else {
            if(cnt>maxx) maxx=cnt;
            cnt=2;
        }
    }
    
    cout<<maxx<<endl;


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