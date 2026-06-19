#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>n;
    n[1]="fatema";
    n[2]="taj";
    n[3]="mim";
    for(auto &name:n)
    {
        cout<<name.first<<" "<<name.second<<endl;
    }
}
