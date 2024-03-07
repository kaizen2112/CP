#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n, flag=0, op=0;
    int start, end;
    cin>>n;
    string strip;

    f(i, n) {
        cin>>strip[i];
        if(n==1 && strip[0]== 'W') {
            // cout<<0;
            op = 1;
        }

        if(strip[i]=='B' && flag==0) {
            start = i;
            flag=1;
        }
        if(strip[i]=='B' && flag!=0) {
            end = i;
        }

    }
    if(op==0) cout<<end-start+1;
    else cout<<0;


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
    cout<<endl;
  }
}