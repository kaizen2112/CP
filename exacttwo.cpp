#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    map<int, int> mp;
    f(i, n) {
        cin>>a[i];
        mp[a[i]]++;
        b[i]=1;
    }
    int cnt=0;
    for(auto k: mp) {
        if(k.second>=2) cnt++;
    }
    if(cnt<2) {
        cout<<-1<<endl;
        return;
    }
    else {
        for(int i=0; i<n-1; i++) {
            
            for(int j=i+1; j<n; j++) {
                if(a[i]==a[j] && cnt%2==0) {
                    b[i]=1; b[j]=2;
                    cnt--;
                }
                else if(a[i]==a[j] && cnt%2!=0){
                    b[i]=1; b[j]=3;
                    cnt--;
                }
                
            }
        }
    }

    f(i, n) {
        cout<<b[i]<<" ";
    }
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
//   cout<<1<<" "<<1<<" "<<1<<" "<<2<<" "<<2<<" "<<3<<endl;
//   cout<<-1<<endl;
//   cout<<1<<" "<<2<<" "<<1<<" "<<3<<endl;
//   cout<<-1<<endl;
//   cout<<1<<" "<<1<<" "<<3<<" "<<3<<" "<<2<<endl;
//   cout<<-1<<endl;
//   cout<<1<<" "<<2<<" "<<2<<" "<<1<<" "<<2<<" "<<2<<" "<<2<<" "<<3<<" "<<3<<endl;
//   cout<<-1<<endl;
//   cout<<1<<" "<<1<<" "<<1<<" "<<1<<" "<<1<<" "<<1<<" "<<1<<" "<<2<<" "<<1<<" "<<1<<" "<<1<<" "<<1<<" "<<1<<" "<<1<<" "<<3<<" "<<1<<" "<<1<<" "<<1<<endl;

}