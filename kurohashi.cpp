#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, flag;
    cin>>N;
    for(int i=0; ;i++)
    {
        if( (N%10 == (N/10)%10) && ((N/10)%10 == (N/100)%10)) { flag = 1; break; }
        N++;
        //cout<<N%10<<(N/10)%10<<(N/100)%10<<endl;
    }
    cout<<N;

}