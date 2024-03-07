#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    map<char, int> m;
    // int n; cin>>n;
    // f(i, n) {
    //     string s;
    //     cin>>s;
    //     m[s]++;
    // }
    // for(auto p: m) {
    //     cout<<p.first<<" "<<p.second<<endl;
    // }

    string s; cin>>s; int n=s.size();
    f(i, n) {
        char c = s[i];
        m[c]++;
    }
    char most_occuring_char;
    int max_frequency = 0;
    
    for(auto it = m.begin(); it != m.end(); ++it) {
        if(it->second > max_frequency) {
            most_occuring_char = it->first;
            max_frequency = it->second;
        }
    }
    
    cout << most_occuring_char << max_frequency << endl;

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