#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int N,k;
        cin>>N>>k;
        multiset<long long int>s;
        for(int i=0;i<N;i++)
        {
            long long int num;
            cin>>num;
            s.insert(num);
        }
        long long int total_candies=0;
        for(int i=0;i<k;i++)
        {
        auto it=(--(s.end()));
        int candi_count=*it;
        total_candies+=candi_count;
        s.erase(candi_count);
        s.insert(candi_count/2);
        }
        cout<<total_candies;
    }

}
