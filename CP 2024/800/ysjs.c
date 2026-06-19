#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T;
    scanf("%d", &T);
    int i = 1;
    while(T--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int answer = 19;
        answer += abs(a-b)*4;
        answer += (a * 4);
        printf("Case %d: %d\n",i, answer);
        i++;
    }
    return 0;
}
