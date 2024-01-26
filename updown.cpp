#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n,flag=0, x=0, y=0;
    char s1[n];
        cin>>n;
        cin>>s1;
        for(int i=0; i<n; i++)
        {
            if (s1[i] == 'U') y++;
            else if(s1[i] == 'D') y--;
            else if(s1[i] == 'R') x++;
            else if(s1[i] == 'L') x--;
            else x=x, y=y;

            if(x==1 || y==1) flag = 1;
        }
        if(flag==1) cout<<"YES";
        else cout<<"NO";


}