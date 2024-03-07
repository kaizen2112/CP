#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void cut(long long num) {
    if(num==0) return;

    
    cut(num/10);
    cout<<num%10<<" ";
    
}
void sol()
{
    long long num;
    cin>>num;
    if(num==0) cout<<0;

    cut(num);


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