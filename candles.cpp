#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c, cc, a, b, sum=0;
    cin>>a>>b;
    c=a;
    for(int i=0; c!=0; i++)
    {
        cc= c;
        c = c/b;
        sum += c;
        c = (c + cc%b)/b;
        sum += c;
    }
    cout<<sum+a;
}