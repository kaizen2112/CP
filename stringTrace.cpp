#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    
    int n, in, p=0;
    
    cin>>n;
    vector<int> trace(n);
    vector<int> final(n);
    vector<int> cnt(3*10^5, 0);
    f(i, n) cin>>trace[i];
 
 
    
    for(int i=0; i<n; i++) {
        if(trace[i]==0) {
            if(p>25) continue;
            final[i]=p;
            p++;
        }
        else {
            if(cnt[trace[i]]>25) continue;
            final[i] = trace[i]-trace[i]+cnt[trace[i]];
            cnt[trace[i]]++;
        }
 
    }                                                                                                                                                      
    f(i, n) cout<<char('a'+ final[i]);

    //cout<<char('a' + 25);
 
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