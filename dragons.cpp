#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int s, n, cnt=0;
    cin>>s>>n;
    vector<pair<int, int>> dragons;
    int first, second;

    for (int i = 0; i < n; i++) {
        cin >> first >> second;
        dragons.push_back({first, second});
    }
    // for (auto p : dragons) {
    //     cout << p.first << " " << p.second << endl;
    // }
    
    sort(dragons.begin(), dragons.end());

    f(i,n) {
          if(dragons[i].first<s) {cnt++; s+=dragons[i].second; }
          else {cnt=0; break;}
    }
    if(cnt==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    // for (auto p : dragons) {
    //     cout << p.first << " " << p.second << endl;
    // }


    

    
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  sol();
  
}