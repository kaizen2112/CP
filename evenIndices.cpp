#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void even( int n, long long arr[])
{
    if(n%2!=0) cout<<arr[n-1]<<" ";
    
    if(n==1) return;  // base case

    n--;
    even(n, arr);

}
void sol()
{
    int n;
    cin>>n;
    long long arr[n];
    f(i,n) {
        cin>>arr[i];
    }
    even(n, arr);

}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
    sol();

}