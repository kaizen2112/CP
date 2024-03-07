#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, P, a, count=0;
    cin>>N>>P;
    for(int i=0; i<N; i++)
    {
        cin>>a;
        if(a<P) count++;
    }
    cout<<count;
}