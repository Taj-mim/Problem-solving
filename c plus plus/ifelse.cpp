#include<iostream>
int main()
{
    int x;
    using std::cin,std::cout;
    cin>>x;
    if(x>=18)
    {
        cout<<"eligible for vote";
    }
    else if(x<0)
    {
        cout<<"not born yet";
    }
    else if(x>100)
    {
        cout<<"too old";
    }
    else
    {
        cout<<"not eligible";
    }
    return 0;
}
