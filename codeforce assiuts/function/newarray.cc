#include<bits/stdc++.h>
using namespace std;
void newarr(int a,int arr[],int brr[])
{
   for(int i=0;i<a;i++)
   {
       cin>>arr[i];
   }
   for(int i=0;i<a;i++)
   {
       cin>>brr[i];
   }
   int crr[a+a];
   for(int i=0;i<a;i++)
   {
       crr[i]=brr[i];
   }
   for(int i=0;i<a;i++)
   {

       crr[a+i]=arr[i];
   }
   for(int i=0;i<a+a;i++)
   {
       cout<<crr[i]<<" ";
   }

}
int main()
{
    int n;
    cin>>n;
    int arr[n],brr[n];
    newarr(n,arr,brr);

}
