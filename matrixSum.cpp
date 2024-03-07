#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol(int arr[], int brr[], int n)
{
    if(n==0) {
        arr[n] += brr[n];
        return;
    }
    arr[n]+=brr[n];
    sol(arr, brr, n-1);

}
int main()
{
  int a, b;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>a>>b;
  int n = a*b;
  int arr[n], brr[n];
  f(i,n) cin>>arr[i];
  f(i,n) cin>>brr[i];

  sol(arr, brr, n-1);
  int c=0,d=0;
  for(int q=0; q<a; q++){
    for (int i =c; i < b+c; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

    c=c+b;
    
  }  
}