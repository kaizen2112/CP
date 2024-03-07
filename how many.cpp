#include<bits/stdc++.h>
using namespace std;
void sol()
{
  int s, t,a=0,b=0,c=0, count=0;
  cin>>s>>t;
  for(a=0;((a+b+c)<=s) && ((a*b*c)<=t) ; a++)
  {
     for(b=0; ((a+b+c)<=s) && ((a*b*c)<=t); b++)
     {
         for(c=0;((a+b+c)<=s) && ((a*b*c)<=t); c++)
         {
             //cout<<a<<b<<c<<endl;
             if(((a+b+c)<=s) && ((a*b*c)<=t)) count++;
         }b=0;
     }c=0;
  }
  cout<<count;

}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
  
}