#include<iostream>
int main()
{
    int i,j;
    for(i=3;i>=1;i--)
    {
        for (j=1;j<=i;j++)
        {
            std::cout<<j;

        }
        std::cout<<'\n';
    }
}
