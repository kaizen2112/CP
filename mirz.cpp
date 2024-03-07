#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int t;cin >> t;
    while(t--)
    {
        int n, p; cin >> n;
    
        vector <int> al(26,-1);
        string s = "";
        char a = 'a', b;
        for(int i = 0; i < n; i++){
            cin >> p;
            for(int j = 0; j < 26; j++){
                if(al[j]+1 == p) {
                    s += ('a'+j);
                    al[j]++;
                    break;
                }
            }
        }
        //for(auto i : v) cout << i;
        cout <<  s << "\n";
    }
}