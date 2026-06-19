#include<bits/stdc++.h>
using namespace std;
void prime(int t,long long int n)
{
    long long int counnt=0;
    while(t-->0)
    {
        cin>>n;
        if(n==1)
        {
            cout<<"YES"<<endl;
        }
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            counnt++;
        }
       if(counnt==0)
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
    int t;
    long long int n;
    cin>>t;
    prime(t,n);

}
