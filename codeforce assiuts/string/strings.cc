#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int s1,s2;
    s1=a.length();
    s2=b.length();
    cout<<s1<<" "<<s2<<endl;
    string x;
    x=a+b;
    cout<<x<<endl;
    int y;
    y=a[0];
    a[0]=b[0];
    b[0]=y;
    cout<<a<<" "<<b;
}
