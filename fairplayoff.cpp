#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[4], maxI, maxII, temp;
        //int arr2[4]
        for(int i=0; i<4; i++)
        {
            cin>>arr[i];
            //arr2[i] = arr[i];
            if(i<=1)
            {
            maxI = arr[0];
            maxII = arr[1];
            if(arr[1]>arr[0])
            {maxII=arr[1]; maxI=arr[0];}
            else 
            {maxII=arr[0]; maxI=arr[1];}
            }
            else
            {
                if(arr[i]>maxI) 
                {  maxI = arr[i];
                      if(maxI>maxII)
                      { 
                        temp = maxII;
                        maxII = maxI;
                        maxI = temp;
                      }
                }
            }
        }
        //cout<<maxI<<" "<<maxII<<endl;
        /*
        sort(arr2, arr2+4);
        if(((arr[0] == arr2[2] || arr[0] == arr2[3])||(arr[1] == arr2[2] || arr[1] == arr2[3]))&&((arr[2] == arr2[2] || arr[2] == arr2[3])||(arr[3] == arr2[2] || arr[3] == arr2[3]))) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        */

       if(((maxI==arr[0]||maxI==arr[1])&&(maxII==arr[2]||maxII==arr[3]))||(maxI==arr[0]||maxI==arr[1])&&(maxII==arr[2]||maxII==arr[3])) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       

    }
}
