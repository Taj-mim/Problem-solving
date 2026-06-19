#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k;
    cin>>t;
    while(t--)
    {
        cin>>k;
        for(int i=0; ; i++)
        {
            if(i%3==0||i%10==0)
           continue;
           {
                if(--k==0)
           cout<<i<<endl;
           break;
           }

        }


    }
}
