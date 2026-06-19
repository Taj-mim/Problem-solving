#include<bits/stdc++.h>
using namespace std;
double ave(int a,double arr[ ])
{
    double sum=0;
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    double arr[n];
    cout<<setprecision(8)<<ave(n,arr)/n<<endl;
}
