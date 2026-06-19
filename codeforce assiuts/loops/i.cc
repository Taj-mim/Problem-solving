#include<iostream>
using namespace std;
int main()
{
   long long int num,orginal,rev=0,rem;
   cin>>num;
   orginal=num;
   while(num!=0)
   {
       rem=num%10;
       rev=rev*10+rem;
       num=num/10;
   }

   cout<<rev<<endl;
   if(orginal==rev)
       cout<<"YES";
   else
    cout<<"NO";
   return 0;


}
