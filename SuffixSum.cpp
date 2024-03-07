#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
long long sum=0;
void sol(int n,int p, long long arr[])
{
    if(n==p) {
        sum += arr[n];
        return;
    }  
    sum+= arr[n];
    sol(n-1, p, arr);      

}
int main()
{
  int n, m;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>n>>m;
  long long arr[n];
  f(i,n) cin>>arr[i];
  
  sol(n-1, n-m, arr);
  cout<<sum;
}