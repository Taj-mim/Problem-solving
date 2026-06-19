#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    vector<int>sequence(n);

    for (int i = 0; i < n; i++)
        {
           cin >> sequence[i];
        }
   sort(sequence.begin(),sequence.end());

    int min_val=sequence[0];
    int second_order_stat=-1;

    for (int i =1;i<n;i++)
    {
        if (sequence[i] > min_val)
        {
            second_order_stat = sequence[i];
            break;
        }
    }

    if (second_order_stat != -1)
    {
       cout<<second_order_stat<<endl;
    }
    else
    {
       cout<<"NO"<<endl;
    }
}
