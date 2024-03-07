#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a;
    char v;
    string s = "000";
    cin>>t;
    for(int i=0; i<3; i++)
    {
        if(t==0) break;
        a = t%10;
        t/=10;
        if(a==9) s[2-i] = 1 + '0';
        else if(a==1) s[2-i] = 9 + '0';
        else{
        s[2-i] = a + '0';
        //cout<<s[2-i]<<endl;
        } 
    }
    cout<<s;   
}