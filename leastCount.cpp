#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n, imax, imin, negcnt=0; bool m=false, p=false;
    cin>>n;
    vector<int> arr(n+1); // Initialize vector with size n
    f(i, n) {
        cin>>arr[i];
        
    }
    f(i, n) {
        if(arr[i]>0 && m!=true) { m=true; imax = i; }
        if(arr[i]<0 && p!=true) { p=true; imin = i; }
        if(arr[i]==0) {
            cout<<0<<endl;
            return; 
        }
        else {
             if(arr[i]<0) negcnt++;
        }
    }
    if(negcnt==0) {
        cout<<1<<endl;
        cout<<imax+1<<" "<<0<<endl;
    }
    else if(negcnt%2==1) {
        cout<<0<<endl;
    }
    else if(negcnt%2==0) {
        cout<<1<<endl;
        cout<<imin+1<<" "<<0<<endl;
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