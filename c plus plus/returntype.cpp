#include<iostream>
using namespace std;
double vol(double l,double w,double h)
{
    return l*w*h;
}
int main()
{
    double len,wid,hi;
    double volume;
    cin>>len;
    cin>>wid;
    cin>>hi;
   volume=vol(len,wid,hi);
   cout<<"the volume is "<<volume;
   return 0;
}
