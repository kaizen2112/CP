#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    long long n, val, sum=2; 
    cin>>n;
    while(sum<30) {
        val = (1<<sum)-1;
        if(n%(val)==0) {
            cout<< n/val <<endl;
            break;
        }
        sum++;
    }

}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>t;
  while(t--)
  {
    sol();
  }
}
