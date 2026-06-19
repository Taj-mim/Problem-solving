#include<iostream>
using namespace std;
int main()
{
    int n,number;
    cin>>n;
   for(int i=1;i<=n;i++)
   {
        cin>>number;
        if(number==0)
        {
            cout<<0;
        }
     while(number!=0)
        {
            cout<<number%10<<" ";
            number=number/10;
        }
        cout<<endl;
   }
       return 0;
}
