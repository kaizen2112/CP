#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       string s;
       int count=0;
       cin>>s;
       for(int i=0; i<10; i++)
       {
           if(i==0 && s[0]!='c') count++;
           else if(i==1 && s[1]!='o') count++;
           else if(i==2 && s[2]!='d') count++;
           else if(i==3 && s[3]!='e') count++;
           else if(i==4 && s[4]!='f') count++;
           else if(i==5 && s[5]!='o') count++;
           else if(i==6 && s[6]!='r') count++;
           else if(i==7 && s[7]!='c') count++;
           else if(i==8 && s[8]!='e') count++;
           else if(i==9 && s[9]!='s') count++;
           //cout<<s[i]<<count<<endl;
       }
       cout<<count<<endl;

    }
}