#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string name;
    cin>>name;
    int count=0;
    int length;
    length=name.length();
    for(int i=0;i<length;i++)
    {
      if(name[i]=='a'||name[i]=='A'||name[i]=='e'||name[i]=='E'||name[i]=='i'||name[i]=='I'||name[i]=='o'||name[i]=='O'||name[i]=='u'||name[i]=='U')
    {
        count++;
    }
    }
     cout<<count;

}
