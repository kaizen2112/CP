#include<bits/stdc++.h>
using namespace std;

int dp[31][31];

int sol(int N, int R) {
    if (R == 0 || N == R) return 1;
    if (dp[N][R] != -1) return dp[N][R];
    

     dp[N][R] = sol(N - 1, R - 1) + sol(N - 1, R);
     return dp[N][R];
}

int main() {
    memset(dp, -1, sizeof(dp)); 
    
    int N, R;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> R;

    cout << sol(N, R);
    return 0;
}
