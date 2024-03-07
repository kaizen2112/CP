#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n;
    cin>>n;
    int m = 2*n;
    vector<long long> vec(m);
    long long score=0;
    for(int i=0; i<m; i++) {
        cin>>vec[i]; 
    }
    sort(vec.begin(), vec.end());

    int i = m-1;
    while(i>0) {
        score += min(vec[i], vec[i-1]);
        i -= 2;

    }
    cout<<score<<endl;


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
  return 0;
}