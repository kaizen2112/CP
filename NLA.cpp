#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num, findDigit;
    cin>>num;
    long long int digits=0;
    findDigit = num;
    while(findDigit!=0)
    {
        findDigit=findDigit/10;
        digits++;
    }
    long long int luckCount=0;
    long long int j=0;
  
    while(j<=digits)
    {
        long long int lastDigit =num%10;
        if(lastDigit==0 || lastDigit==8)
        luckCount=luckCount;
        
        else if (lastDigit%4==0 || lastDigit%7==0)
        luckCount++;
        
        else luckCount = luckCount;
        num=num/10;
        j++;
    }
   if(luckCount==4) cout<<"YES"<<endl;
   else if(luckCount==7) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
 
 
}