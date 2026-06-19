#include<iostream>
#include<ctime>
int main()
{
    using std::cin,std::cout;
    srand(time(0));
    int num,tries;
    int guess;
    num=(rand()%5)+1;
    do
    {
        cout<<"enter any guess=";
        cin>>guess;
        tries++;
        if(guess>num)
        {
            cout<<"too high"<<'\n';
        }
        else if(guess<num)
        {
            cout<<"too low"<<'\n';
        }
        else
        {
            cout<<"correct"<<'\n';
            cout<<"tries="<<tries;
        }

    }
    while(guess!=num);
        return 0;

}
