#include<iostream>
using namespace std;
class matrix
{
    int m[3][3];
public:
    void read();
    void display();
   friend matrix trans(matrix m1);
};
void matrix::read()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>m[i][j];
        }
    }
}
void matrix::display()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}
matrix trans(matrix m1)
{
    matrix m2;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            m2.m[i][j]=m1.m[j][i];
        }
    }
       return m2;
}
int main()
{
    matrix ob1,ob2;
    ob1.read();
    ob1.display();
    cout<<"show transpose matrix:"<<endl;
    ob2=trans(ob1);
    ob2.display();
}
