#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    int result=k/60;
    float res2=k%60;
     cout <<setfill('0')<<setw(2)<<21+result<<":"<< setw(2) <<res2;
    return 0;
}
