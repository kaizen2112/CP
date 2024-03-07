#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n; 
    int ara[n];
    for(int i = 0 ; i < n ; i++){
        cin>>ara[i];
    }
    int dp[105][11] = {};
    dp[0][0] = 1;
    dp[0][ara[0]] = 1;
    for(int i = 1 ; i < n ; i++){
        for(int j = 0 ; j <= 10 ; j++){
             dp[i][j] = dp[i - 1][j];
            if(j - ara[i] >= 0)dp[i][j] += dp[i - 1][j-ara[i]];
           
            cout<<i <<" "<<j<<" "<<dp[i][j]<<endl;
        }
    }
    cout<<dp[n - 1][10]<<endl;
}