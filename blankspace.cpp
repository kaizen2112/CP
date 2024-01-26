#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i, n, count=0, max=0;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            if(a[i]==0) count++;
            else if(a[i]==1 || a[i]==0 || i==n-1)
            {
                 if(count>max) max=count;
                 count=0;
            }
        }
        if(n==1 && a[0]==0) cout<<1<<endl;
        else cout<<max<<endl;

    }
}