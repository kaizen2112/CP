#include<bits/stdc++.h>
using namespace std;
void xorinacci(long long a, long long b, long long n)
{
    long long ans;
    if(n%3==0) ans = a;
    else if(n%3==1) ans = b;
    else if(n%3==2) ans = a^b;

    cout<<ans<<endl; 
    
    
    
    // if(n==0) return a;
    // if(n==1) return b;

    // return xorinacci(a,b,n-1) ^ xorinacci(a,b,n-2);


    // long long n, m, c, t;
    // cin>>n>>m>>t;
    // if(t==0) { cout<<n<<endl; }
    // else if(t==1) { cout<<m<<endl; }
    // else
    //     { 
    //         for(long long i=1; i<t; i++)
    //          {
    //          c = n^m;
    //          n = m;
    //          m = c;
    //          }
    //          cout<<c<<endl;
    //     }
    
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        long long a, b, n;
        cin>>a>>b>>n;
        xorinacci(a, b, n);
    }
    
}