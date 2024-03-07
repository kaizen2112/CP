#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    string s; cin>>s;
    int flag=0, n = s.size();
    if(s=="()") { cout<<"NO"<<endl; return; }
    else {
        cout<<"YES"<<endl;
        f(i,n) {
           if(s[i+1]==s[i]) flag=1;
        }
        if(flag==1) {
            f(i, n) {
             cout<<"()";
            }
            cout<<endl;
        }
        else {
             f(i, n) cout<<'(';
             f(i, n) cout<<')';        
             cout<<endl;
        }
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