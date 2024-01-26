#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n, i, j, count=0, sum1=0, sum2=0, diff;
    cin>>n;
    int arr[n*n-1];
    for(i=0; i<n*n; i++) {
        cin>>arr[i];
        if(i%(n+1)==0) sum1+=arr[i];

        if(i%(n-1)==0 && i!=0 && i<n*n-1) sum2+=arr[i];
    }
    diff = abs(sum1-sum2);
    cout<<diff;
}
int main()
{
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  
    sol();
  
}