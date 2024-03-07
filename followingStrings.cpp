#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    
    int n, in, p=0;
    
    cin>>n;
    vector<int> trace(n);
    vector<int> final(n);
    vector<int> cnt(2e5, 0);
    f(i, n) cin>>trace[i];
 
 
    
    for(int i=0; i<n; i++) {
        //if(trace[i]==0) cnt++; in[i]=trace[i]+cnt;
        if(trace[i]==0) {
            final[i]=p; 
            cout<<char('a'+ final[i]);
            p++;
        }
        else {
            final[i] = cnt[trace[i]];
            cout<<char('a'+ final[i]);

            cnt[trace[i]]++;
        }
 
    }
    //f(i, n) cout<<final[i];
 
    //f(i, n) cout<<char('a'+ final[i]);
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