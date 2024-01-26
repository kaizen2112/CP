#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    string str;
    int n, p, l;
    cin>>str;
    int maxpos=0;
    for(int i = 0 ; i < str.size();i++)
    {
        if(str[i] == '0')
        {
            maxpos = i;
            break;
        }
    }
    for(int i = 0 ; i < str.size() ; i++)
    {
        if(i!=maxpos)
        cout<<str[i];
    }
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
    sol();
}