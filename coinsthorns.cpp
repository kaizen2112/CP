#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0, cnt=0;
    while(i<n) {
        if(s[i]=='@') cnt++;
        else if(s[i]=='*') {
            // if(s[i+1]=='*' && s[i+2]=='@' || s[i+2]=='.') i++;

            if(s[i+1]=='*') break;
            //else i++; 

        }

        i++;
        
        
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