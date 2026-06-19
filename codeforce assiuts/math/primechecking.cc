#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n;
   cin>>n;
   bool ch=0;
   if(n==0||n==1)
    {
       ch=1;
    }
   for(int i=2;i<=sqrt(n);i++)
   {
       if(n%i==0)
       {
           ch=1;
           break;
       }
   }
    if(ch==0||n==2)
   {
       cout<<"YES";
   }
    else
    {
        cout<<"NO";
    }
   }

