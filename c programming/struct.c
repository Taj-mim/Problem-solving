#include<stdio.h>
struct books
{
    char name[20];
    int numbers;
    char writer[20];
};
int main()
{
    struct books himu;
    {
        strcpy(himu.name,"moyurakkhi");
        himu.numbers=20;
        printf("%s",himu.name);

    }
}
