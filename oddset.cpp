#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, even=0, odd=0;
        cin>>n;
        int arr[2*n];
        for(int i=0;i<2*n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0) even++;
            else odd++;
        }
        if(odd==even) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}