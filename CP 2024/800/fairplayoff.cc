#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int arr[4];
        for(int j=0;j<4;j++)
        {
            cin>>arr[j];
        }
        if((min(arr[0],arr[1])>max(arr[2],arr[3]))||((max(arr[0],arr[1]))<min(arr[2],arr[3])))
                cout<<"NO"<<endl;
        else
                cout<<"YES"<<endl;
    }
    return 0;
}

