#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n;
    cin>>n;
    vector<long long> num(n);
    f(i, n) cin>>num[i];

    sort(num.begin(), num.end());

    long long max = (1<<31) -1;
    int group = n;

    int l=0, r=n-1;
    while(l<r) {
        if(num[l]+num[r]==max) {
            group--;
            l++;
            r--;
        }
        else if(num[l]+num[r]>max) r--;
        else l++;
    }
    cout<<group<<endl;

    
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