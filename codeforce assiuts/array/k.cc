#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int sum=0;
    string arr;
    cin>>arr;
        for(int i=0;i<n;i++)
        {
         sum=sum+arr[i]-'0';
        }
        cout<<sum;


}
