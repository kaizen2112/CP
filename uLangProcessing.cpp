#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;

void sol()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<char> vec;
    for(int i=n-1; i>=0; i--) {
        if(s[i] =='a'|| s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u') {
            vec.push_back('.');
            vec.push_back(s[i]);
            vec.push_back(s[i-1]);
            
            i -= 1;
        }
        else {
            vec.push_back('.');
            vec.push_back(s[i]);
            vec.push_back(s[i-1]);
            vec.push_back(s[i-2]);
             
            i -= 2;
        }
    }
    for (int i = vec.size()-1; i > 0; i--)
    {
        cout<<vec[i];
    }
    cout<<endl;
    


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