#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n, op=0, cl=0, moves=0;
    string s;
    cin>>n>>s;
    f(i, n) {
      if(s[i]=='(') op++;
      else cl++;

      if(cl>op) {
        cl = op =0;
       
        moves++;
      }
    }
    cout<<moves<<endl;

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