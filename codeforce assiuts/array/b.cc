#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
         cin>>arr[i];
    }
    long long int x,pos=-1;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(x==arr[i])
        {
            pos=i;
        break;
        }
}
if(pos==-1)
{
    cout<<"-1";

}
else
{
    cout<<pos;
}

    return 0;
}
