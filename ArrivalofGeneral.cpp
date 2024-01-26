#include<bits/stdc++.h>
using namespace std;
/*
int maxfind(int arr[], int max, int n, int M)
{
    
    for(int i=n-1; i>=0; i--)
    {
        if(arr[i]==max) M = i; 
    }
    return M;

}
int minfind(int arr[], int min, int n,  int m)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==min) m = i; 
    }
    return m;
}*/
int main()
{
    int n, max, min, M=0, m=0, move;
    cin>>n;
    int arr[n];
    int arr2[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        arr2[i]= arr[i];

    }
    sort(arr2, arr2+n);
    min = arr2[0];
    max = arr2[n-1];
    /*
    maxfind(&arr[n-1], max, n, M);
    minfind(&arr[0], min, n, m);
    */
    for(int i=n-1; i>=0; i--)
    {
        if(arr[i]==max) M = i; 
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]==min) m = i; 
    }
    if(M<m)
    {
        m = n-m-1;
        move = M +m;
    }
    else
    {
        m = n-m-1;
        move = M+m-1;
    }
    cout<<max<<" "<<min<<" "<<M<<" "<<m<<" "<<move;

}





/*
int maxfind(int arr[], int n, int max, int M)
{
    //int max;
    for(int i =n-1; i<=0; i--)
    {
    if(i==n-1) max=arr[n-1];    
    else
        {
            if(arr[i]>=max)  max = arr[i]; M=i;
        }
    }
    return M;

}
int main()
{
    int n, min=0, m, max=0, M, move;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(i==0) min=arr[0];
        else
        {
            if(arr[i]<=min)  min = arr[i]; m = i;
        }
    }
    
    maxfind(&arr[0], n, max, M);
    
    if(M<m)
    {
        m = n-m-1;
        move = M +m;
    }
    else
    {
        m = n-m-1;
        move = M+m-1;
    }
    cout<<max<<" "<<min<<" "<<M<<" "<<m<<" "<<move;
}
*/