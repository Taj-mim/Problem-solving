#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int arr[n];
    int counnt=0;
    int minn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        counnt=0;
        while(arr[i]%2==0)
        {
            counnt++;
            arr[i]=arr[i]/2;
        }
        minn=min(counnt,minn);
    }
        cout<<minn<<endl;
}
