#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int b, bisquit=0;
    int a,t, i=1;
    cin>>a>>b>>t; //3 5 7    3 2 9 
    int x=a;
    a=i*a;
    while(x<=t) {
        bisquit+=b; 
        i++;             
        x=i*a;
        //cout << a << " ";
        //cout << endl ;                          
    }
    cout<<bisquit;

}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
    sol();
}