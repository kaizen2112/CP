#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum=0, sum2=0, count=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum = sum + arr[i];
    }
    sort(arr, arr+n);
    for(int i=n-1; i>=0; i--)
    {
        sum2 = sum2 + arr[i];
        count++;
        if(sum2>(sum-sum2)) break;
    }
    cout<<count;
}
