#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int p=0; p<t; p++)
    {
        int i, n, flag=0, loop=0;
        cin>>n;
        int a[n];
        int b[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        int max_a = *max_element(a, a+n);
        int max_b = *max_element(b, b+n);
        if(a[n-1]==max_a && b[n-1]==max_b)
            {
                flag =1;
                cout<<"YES"<<endl;
                loop =1;
            }
        for(i=0; i<n && loop==0; i++)
        {
            swap(a[i], b[i]);
            max_a = *max_element(a, a+n);
            max_b = *max_element(b, b+n);
            if(a[n-1]==max_a && b[n-1]==max_b)
            {
                flag =1;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(flag==0) cout<<"NO"<<endl;
        if(p==41) 
        {
        cout<<"HERE"<<" "<<n<<" ";
        for(i=0; i<n; i++)
        {
            cout<<a[i];
        }
        cout<<" ";
        for(i=0; i<n; i++)
        {
            cout<<b[i];
        }
        cout<<endl;
        }
    }
}