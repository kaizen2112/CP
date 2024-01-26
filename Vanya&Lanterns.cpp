#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, l;
    cin>>n>>l;
    double arr[n+1];
    arr[0] =0;
    for(int i=1;i<n+1;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+(n+1));
    for(int i=0; i<n+1; i++)
    {
        if(i==0) arr[0] = 2*(arr[1]-arr[0]);
        else if(i==n) arr[n] = 2*(l-arr[n]);
        else
        arr[i]=arr[i+1]-arr[i];
    }
    sort(arr, arr+(n+1));

    cout<<arr[n]/2;

}
