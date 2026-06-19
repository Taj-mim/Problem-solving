#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int x,y;
        cin>>x>>y;
        int minn=min(x,y);
        int maxx=max(x,y);
        int sum=0;
        for(int i=minn+1;i<maxx;i++)
        {
            if(i%2==1)
                    sum=sum+i;
        }
          cout<<sum<<endl;
    }
    return 0;

}
