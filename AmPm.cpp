#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    string s;
    cin>>s;
    int a = (int)s[0]-48;
    int b = (int)s[1]-48;

    int p = a*10 + b;
    // cout<<p<<endl;
    if(p>=12) {
        if(p!=12) {
            if(p-12<10) {
                cout<<0<<p-12<<s[2]<<s[3]<<s[4]<<" "<<"PM"<<endl;
            }
            else cout<<p-12<<s[2]<<s[3]<<s[4]<<" "<<"PM"<<endl;
        }
        else cout<<p<<s[2]<<s[3]<<s[4]<<" "<<"PM"<<endl;
        

    }
    else if(p==0) {
        cout<<p+12<<s[2]<<s[3]<<s[4]<<" "<<"AM"<<endl;
    }
    else {
        cout<<s<<" "<<"AM"<<endl;
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