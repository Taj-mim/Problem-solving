#include<iostream>
#include<cmath>
int main()
{
    int x,y,z,h;
    using std::cin,std::cout;
    cin>>x;
    cin>>y;
   /* z=pow(x,2)+pow(y,2);
    h=sqrt(z);
    cout<<h;*/
     z=sqrt(pow(x,2)+pow(y,2));
    cout<<z;
}
