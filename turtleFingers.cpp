#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int l, a, b;
    cin>>a>>b>>l;

    int xx = log(l)/log(a)+1;
    int yy= log(l)/log(b)+1;
    long long pwa[xx+1], pwb[yy+1];

    map<int, int> mp;
    long long obj, k, p;
    
    
    pwa[0]=pwb[0]=1;
    p=1;
    for(int x=1; x<=xx; x++) {
        if(p>l) break;
        p *= a;
        pwa[x]=p;
    }
    p=1;
    for(int y=1; y<=yy; y++) {
        if(p>l) break;
        p *= b;
        pwb[y]=p;
    }
    for (int x=0; x<=xx; x++) {
        for (int y=0; y<=yy; y++) {
            if(pwa[x] > l || pwb[y] > l) break;
             obj = pwa[x]*pwb[y];
             if(l % obj==0) {
                k=l/obj;
                mp[k]++;
             }
        }
    }
    cout<<mp.size()<<endl;

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