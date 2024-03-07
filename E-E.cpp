#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n, p=0;
    cin>>n;
    int a[n];
    f(i,n) {
        cin>>a[i];
    }
    f(i,n) {
        if(a[a[i]-1]==i+1) p++;
    }
    cout<<p/2;

}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  sol();
}