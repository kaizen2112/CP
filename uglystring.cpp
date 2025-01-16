#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
        int n, cnt=0, p=0;
        string s;
        cin>>n;
        cin>>s;

        //n = s.size();
        for(int i=2; i<n; i++) {
            
                if(s[i-2]=='m' && s[i-1]=='a' && s[i] =='p') {
                    //cout<<i<<" "<<s[i-2]<<s[i-1]<<s[i]<<endl;
                    cnt++;
                }

                if(s[i-2]=='p' && s[i-1]=='i' && s[i] =='e') {
                    //cout<<i<<" "<<s[i-2]<<s[i-1]<<s[i]<<endl;
                    cnt++;
                }

                
        }
        for (int i = 2; i<n-2; i++)
        {
            if(s[i-2]=='m' && s[i-1]=='a' && s[i] =='p' && s[i+1]=='i' && s[i+2]=='e') {
                    cnt--;
                }
        }
        
        //cout<<";"<<endl;
        
        cout<<cnt<<endl;

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