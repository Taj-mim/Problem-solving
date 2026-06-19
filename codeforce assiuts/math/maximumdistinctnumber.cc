#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    for(long long int i=1;;i++)
    {
        if(i>n)
        {
            cout<<i-1;
            return 0;
        }
        else
        {
            n-=i;
        }
    }

}
