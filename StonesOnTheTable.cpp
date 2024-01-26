#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n, count=0;
    cin>>n;
    char arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        if(i!=0 && (arr[i]==arr[i-1]) ) {
            count++;
        }
    }
    cout<<count;
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  
    sol();

}