#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int c1=0, c2=0, c3=0, c4=0;
    cin>>n;
    int s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
        if(s[i]==1) c1++;
        else if(s[i]==2) c2++;
        else if(s[i]==3) c3++;
        else if(s[i]==4) c4++;
    }
    c1=c1-c3;
    if(c2%2==1){c1=c1-2;}
    if(c1>0)
    {
        cout<<c4+c3+ceil(c2/2.0)+(c1+3)/4;
    }
    else
    {
        cout<<c4+c3+ceil(c2/2.0);
    }
}








