#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n, k;
    cin>>n>>k;
    int array[n]={0};
    int count[100]={0};
    for(int i=0; i<n; i++) {
        cin>>array[i];
        count[array[i]]++;
    }

    if(*max_element(count, count+100)==count[k]) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
/*     if((max_element(count, count+100)-count)==k) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;  
    */

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