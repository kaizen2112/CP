#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long arr[n], p=0, q=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        p = arr[0]*arr[1];
        if(n>2) {q = arr[n-1]*arr[n-2];}
        if(p>q && n>2) cout<<p<<endl; 
        else if(n==2) cout<<p<<endl;
        else cout<<q<<endl;

    }
}