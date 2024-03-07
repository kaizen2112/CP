#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int sum[12], ss=0;
  for(int i=1; i<=12; i++) {
    int k=i;
    while(k!=0) {
        ss += k%10;
        k/=10;
    }
    sum[i]=ss;
    
  }
  cout<<sum[12];

  
}