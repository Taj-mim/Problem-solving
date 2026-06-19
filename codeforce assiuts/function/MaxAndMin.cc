#include<bits/stdc++.h>
using namespace std;
void sortt(int a,int arr[ ])
{
    sort(arr,arr+a);
    cout<<arr[0]<<" "<<arr[a-1];
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sortt(n,arr);

}
