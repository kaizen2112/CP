#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n; cin>>n;
    int arr[n];
    f(i, n) cin>>arr[i];

    int q, a, b;
    cin>>q;
    for(int l=0; l<q; l++)  {
        cin>>a>>b;
        for(int i=0; i<n; i++) {
            if(a==arr[i]) {
                cout<<a<<endl;
                break;
            }
            if(b==arr[i]) {
                cout<<b<<endl;
                break;
            }

            
        }
        
    }

}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
    sol();
  
}