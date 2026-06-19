#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int c1,c2;
    for(int i=0;i<n;i++)
    {
        long long int x;
        cin>>x;
        c1=x/3;
        c2=((x-c1)/2);
        if(c1+2*c2!=x)
        {
            c2=c1+1;
            cout<<c2<<" "<<c1<<endl;
        }
       else if(c1==c2)
        {
            cout<<c1<<" "<<c2<<endl;
        }
        else
            cout<<c1<<" "<<c2<<endl;
    }
}
