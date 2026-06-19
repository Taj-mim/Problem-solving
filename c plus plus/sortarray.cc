#include<iostream>
using namespace std;
void sorted(int arr[],int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9},size;
    size=sizeof(arr)/sizeof(arr[0]);
    sorted(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}
