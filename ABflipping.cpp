#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n, cnt=0;
    cin>>n;
    string s;
    cin>>s;
    n = s.size();
    bool flag[n]={ false };

    for(int i=0; i<n-1; i++) {
        if(s[i]=='A' && s[i+1]=='B' && flag[i]==false) {
            swap(s[i], s[i+1]);
            flag[i] = true;
            i = i-2;
            cnt++;

        }
    }
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