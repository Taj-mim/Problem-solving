#include<bits/stdc++.h>
using namespace std;
int print(int n)
{
    if(n!=0)
    {
    cout<<"I love Recursion"<<endl;
     print(n-1);
    }


}
int main()
{
    int n;
    cin>>n;
    print(n);
}
