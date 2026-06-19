#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>arr[3];
    arr[0]={2,3};
    arr[1]={7,8};
    arr[2]={9,10};
    swap(arr[0],arr[2]);
    for(int i=0;i<3;i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
}
