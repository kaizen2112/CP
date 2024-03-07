#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
long long sum=0;
void sol(int n, long long arr[])
{
    if(n==0) {
        sum += arr[n];
        return;
    }  
    sum+= arr[n];
    sol(n-1, arr);      

}
int main()
{
  int n;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>n;
  long long arr[n];
  f(i,n) cin>>arr[i];
  
  sol(n-1, arr);
  cout<<sum;
}