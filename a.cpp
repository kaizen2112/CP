
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n , l , t ; cin >> n >> l >> t;
    ll ara[n];
    vector<pair<ll,ll> > vec(l);
    for(ll i = 0 ; i < l ; i++){
        cin>>vec[i].first>>vec[i].second;
        vec[i].first--;
        vec[i].second--;
    }
    for(ll i = 0 ; i < n ; i++)cin>>ara[i];
    for(ll i = 0 ; i < min(((1LL << 9) * l) + 1 , t) ; i++){
        ll idx = i % l;
        ll fidx = vec[idx].first;
        ll sidx = vec[idx].second;
        ara[fidx]|=ara[sidx];
    }
    for(ll i = 0 ; i < n ; i++){
        cout<<ara[i]<<" ";
    }
    cout<<endl;
}