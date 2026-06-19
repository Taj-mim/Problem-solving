#include<iostream>
using namespace std;
int totalnum(int num[],int size)
{
    int i,total=0;
    for(i=0;i<size;i++)
    {
        total+=num[i];
    }
    return total;
}

int main()
{
    int num[]={50,50,50};
    int size = sizeof(num)/sizeof(num[0]);
    int gettotal=totalnum(num,size);
    cout<<gettotal;
    return 0;
}
