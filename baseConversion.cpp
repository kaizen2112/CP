#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void baseConversion(long long num) 
{
    if(num==0) return;

    baseConversion(num/2);
    cout<<num%2;

}
void sol()
{
    long long num;
    cin>>num;
    baseConversion(num);

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