#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int p[] = { 1, 10, 100, 1000, 10000, 100000, 1000000};
void sol()
{
    int a, b, mx=-1, save=0;;
    cin>>a>>b;
    if(b-a>1000) b=a+100;
    for(int i=a; i<=b; i++) {
        
        string s = to_string(i);
        int k= s.size();
        // mx = max(abs(a/(10*k) - a%10),mx);
        // if(abs(i/p[k-1] - i%10)>mx) {
        //     save=i;
        //     mx=abs(i/p[k-1] - i%10);
        //     //cout<<save<<" "<<mx<<","<<endl;

        // }
        if(*max_element(s.begin(),s.end())-*min_element(s.begin(),s.end())>mx) {
            save=i;
            mx=*max_element(s.begin(),s.end())-*min_element(s.begin(),s.end());
            //cout<<save<<" "<<mx<<","<<endl;

        }
       //cout<<k<<" "<<s<<endl;
    }
    cout<<save<<endl;


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