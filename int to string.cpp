#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a;
    char v;
    string s = "0000";
    cin>>t;
    for(int i=0; i<4; i++)
    {
        if(t==0) break;
        a = t%10;
        t = t/10;
        v = a + '0';
        s[3-i] = v;
        //cout<<s[3-i]<<endl;
    }
    cout<<s;   
}