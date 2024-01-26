#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, sum=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum = sum + arr[i];
        }
        if(n%2==0)
        {
            if(sum%2==0) cout<<"YES"<<endl; 
            else cout<<"NO"<<endl;         

        }
        else
        {
            if(sum%2!=0) cout<<"NO"<<endl; 
            else if(sum%2==0 && 2*n==sum) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;

        }

    
    }
}