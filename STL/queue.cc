#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string>q;
    q.push("fatema");
    q.push("taj");
    q.push("mim");
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
}
