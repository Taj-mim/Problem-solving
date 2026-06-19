#include<iostream>
#include<ctime>
int main()
{
    srand(time(NULL));
    int num=(rand()%5)+1;
    using std::cout;
    switch(num)
        {
             case 1:
                cout<<"you win bat";
            break;
             case 2:
                cout<<"you win ball";
            break;
             case 3:
                cout<<"you win kitkat";
            break;
             case 4:
                cout<<"you win nothing";
            break;
             case 5:
                cout<<"cake for you";
                break;

        }
    return 0;
}

