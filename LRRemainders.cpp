#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;


void answer(long long l, long long r, long long num[], long long m) 
{
    long long val=1;


    for(long long i=l; i<r; i++) {
        val *= num[i];
    }
    // cout<<val<<" ";

    cout<<val%m<<" ";


}
void sol()
{
    long long n, m;
    cin>>n>>m;
    long long num[n];
    f(i, n) cin>>num[i];

    string s;
    cin>>s;
    
    long long l=0;
    long long r=n;

    answer(l, r, num, m);
    
    for(long long i=0; i<n-1; i++) {
        if(s[i]=='L') {
            l++;
            answer(l, r, num, m);
        }
        else if(s[i]=='R') {
            r--;
            answer(l, r, num, m);
        }
    }
    cout<<endl;
}




int main()
{
  long long t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>t;
  while(t--)
  {
    sol();
  }
}