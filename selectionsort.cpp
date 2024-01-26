#include<bits/stdc++.h>
using namespace std;
void selectionsort(int a[], int n)
{
    int m,min_i;
    for(int i=0;i<n-1;i++)
    {
        min_i=i;
        m=a[i];

        for(int j=i+1; j<n; j++)
        {
            if(a[j]<m)
            {
                m=a[j];
                min_i=j;
            }
        }
        swap(a[min_i],a[i]);
    }
}
int main()
{
    int n;
    cout<<endl<<"Number of elements in your array: ";
    cin>>n;
    int a[n];
    cout<<endl<<"The elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    selectionsort(a, n);

    cout<<endl<<"The sorted array: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
