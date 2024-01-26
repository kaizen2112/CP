#include<bits/stdc++.h>
using namespace std;
int main()
{
     int q;
     cin>>q;
     while(q--)
     {
        int n, t, max, m, count=0, c=0;
        cin>>n>>t;
        int a[n], b[n], a1[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            a1[i] = a[i]+i;
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        max = b[0];
        m=1;
        for(int i=0; i<n && i<t; i++)
        {
            if(i==0)
            {
                if(a1[i]>t) count++;
                c++;
            }
            if(i>=1)
            {
                if(b[i]>=max && a1[i]<=t)
                {
                    max = b[i];
                    m = i+1;
                    c++;
                }
                else if(b[i]<max && a1[i]<=t)
                {
                    max = max;
                    m = m;
                    c++;
                }
                else if(a1[i]>t)
                {
                    count++;
                    c++;
                }

            }
        }
        if(count==c || count==n) cout<<-1<<endl;
        else cout<<m<<endl;
     }
}