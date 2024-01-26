#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n, l, r, x;
    cin>>n>>l>>r>>x;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int ways=0;
    for(int mask=0; mask < (1<<n); mask++)
    {
        int maxi=0, mini=1e9, totDiff=0, cnt=0;
        for(int i = 0; i< n; i++) {
              if((mask>>i) & 1) {
                totDiff += arr[i];
                maxi = max(maxi, arr[i]);
                mini = min(mini, arr[i]);
                cnt++;
              }
        }

        if( (maxi-mini) >=x && l <= totDiff && totDiff <= r && cnt>=2)
        {
            ways++;
        }
    }
    cout<<ways;


}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
    sol();

}