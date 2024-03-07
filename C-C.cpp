#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int N, Q, L, R, X, count;
    cin>>N;
    int arr[N];
    f(i,N) {
        cin>>arr[i];
    }
    cin>>Q;
    f(i,Q) {
        count=0;
        cin>>L>>R>>X;
        for(int i=L-1; i<R; i++) {
            if(arr[i]==X) count++;
        }
        cout<<count<<endl;
    }
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  sol();
}