#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long i, n;
        int flag=0;
        cin>>n;
        for(i=1; ; i++)
        {
            if(n==i*i*2 || n==i*i*4)
            {
                flag=1;
                cout<<"YES"<<endl;
                break;
            }
            else if(i*i*2>n) break;
        }
        if(flag==0) cout<<"NO"<<endl;
    }
    return 0;
}