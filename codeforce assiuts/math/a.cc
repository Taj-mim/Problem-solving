#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int x;
    cin>>x;
  int logint=log2(x);
  double longf=log2(x);
if(logint==longf)
{
    cout<<"YES";
}
else
{
    cout<<"NO";
}
}
