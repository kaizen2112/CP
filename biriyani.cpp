#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int reverse1(int x)
{
  int sum=0;
  string a;
  while(x)
  {
    a.push_back(x%10);
    x=x/10;
  }
  sum = stoi(a);
  return sum;  


}
void sol()
{
  int a,b;
  cin >> a >> b;
  cout << reverse1(b);

}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    sol();
 
}