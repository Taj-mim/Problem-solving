#include<bits/stdc++.h>
using namespace std;
int countword(string s)
{
    int word_count=0;
    bool in_word=false;
    for(char c:s)
    {
        if(isalpha(c))
           {
               if(!in_word)
               {
                   in_word=true;
                   word_count++;
               }
           }
        else
        {
            in_word=false;
        }
    }
    return word_count;

}
int main()
{
    string s;
    getline(cin,s);
    cout<<countword(s)<<endl;
}
