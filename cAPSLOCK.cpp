#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, flag, len, count=1;
    char s[101];
    cin>>s;
    if(s[0]>='a') flag=1;
    else if(s[0]<'a') flag =2;
    len = strlen(s);

    for(i=1; i<len; i++)
    {
        if(flag==1)
        {
            if(s[i]<'a') count++;
        }
        else if(flag==2)
        {
            if(s[i]<'a') count++;
        }
    }
    if(count==len)
    {
        if(s[0]>='a') s[0]-=32;
        else if(s[0]<'a') s[0]+=32;
        for(i=1; i<len; i++)
        {
            s[i]+=32;
        }
        cout<<s;
    }
    else cout<<s;
}
