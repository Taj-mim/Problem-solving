#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    long long int num[100],sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
        sum+=num[i];
    }
    cout<<abs(sum);


}
