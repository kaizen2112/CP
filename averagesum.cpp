#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
double avg=0;
double m;
void sol(int n, double arr[])
{
    if(n==0) { 
        avg = avg + arr[0]/m;
        return;
    }

    avg = avg + arr[n]/m;
    sol(n-1, arr);

}
int main()
{
  int n;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>n;
  double arr[n];
  m = n;
  f(i,n) cin>>arr[i];

  sol(n-1, arr);
  cout<<fixed<<setprecision(10)<<avg;
}