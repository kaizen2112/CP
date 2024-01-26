#include<bits/stdc++.h>
using namespace std;
void xorinacci()
{
    int n, m, c, t;
    cin>>n>>m>>t;
    if(t==0) { cout<<n<<endl; }
    else if(t==1) { cout<<m<<endl; }
    else
        { 
            for(int i=1; i<t; i++)
             {
             c = n^m;
             n = m;
             m = c;
             }
             cout<<c<<endl;
        }
    
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        xorinacci();
    }
    
}