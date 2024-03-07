#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    string s;
    cin>>s;
    int cnt1=0, cnt2=0;
    for(int i=0; i<5; i++) {

        if(s[i]=='A') cnt1++;
        else cnt2++;

    }
    if(cnt1>=cnt2) cout<<"A"<<endl;
    else cout<<"B"<<endl;

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