#include<iostream>
using namespace std;
int main()
{
    int t,num;
    cin>>t;
  while(t-->0)
    {
        cin>>num;
        long long int fact=1;
        for(int i=num;i>1;i--)
        {
            fact=fact*i;
        }
        cout<<fact<<endl;
    }


}
