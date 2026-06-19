#include<bits/stdc++.h>
using namespace std;
void prime(int n,long long int num)
{
    long long int count=0;
     while(n-->0)
    {
        cin>>num;
         if(num==1)
    {
        cout<<"YES"<<endl;
    }
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
            count++;
    }
    if(count==0)
    {
        cout<<"YES"<<endl;
    }
    else

    {
        cout<<"NO"<<endl;
    }
    }

}
int main()
{
    int n;
    long long int num;
    cin>>n;
    prime(n,num);

}
