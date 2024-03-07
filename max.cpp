#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
long long maxx = -1e9;
void sol(long long array[], int t)
{ 
    if(array[0]> maxx)  maxx = array[0];
    if(t==0) return;
    

    
    
    if(array[t]> maxx) {
        maxx = array[t];
          
    } 
    t--;
    sol(array, t); 
    if(array[t]> maxx) {
        maxx = array[t];
          
    }
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>t;
  long long array[t];
  for (int i = 0; i < t; i++)
  {
    cin>>array[i];    /* code */
  }
  
  sol(array, t-1);
  cout<<maxx;
  
}