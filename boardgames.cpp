#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) //
    {
    long long i, sum=0, ring=0;
    int n;
    cin>>n;
    for(i=0; i<=(n-1)/2; i++)
    {
        ring = 8*i*i;
        sum = sum + ring;
    }
    cout<<sum<<endl;
    }
}
/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



 void solve(){
    int n ; cin>>n ;
    ll total_moves = 0 ;  
    for( ll i = 1; i<= n/2 ; i++){
        total_moves+= i*i ; 

    }
    cout<<total_moves*8<<endl;
 }
int main(){
    int t ;cin>>t; 
    while(t--){
        solve() ; 

    }
    
}

*/