#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int cnt=0;
void sol(string s, int len)     //abir 3
{
    if(len==0) 
    {
        if(s[len] == 'a' || s[len] == 'A' ||
       s[len] == 'e' || s[len] == 'E' ||
       s[len] == 'i' || s[len] == 'I' ||
       s[len] == 'o' || s[len] == 'O' ||
       s[len] == 'u' || s[len] == 'U') cnt++;
        return;
    }

    if(s[len] == 'a' || s[len] == 'A' ||
       s[len] == 'e' || s[len] == 'E' ||
       s[len] == 'i' || s[len] == 'I' ||
       s[len] == 'o' || s[len] == 'O' ||
       s[len] == 'u' || s[len] == 'U') cnt++;

    len--;        //2
    sol(s, len);



    

}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    string s;
    getline(cin, s);

    int len = s.length();
    
    
  
    sol(s, len-1);
    cout<<cnt;
  
}