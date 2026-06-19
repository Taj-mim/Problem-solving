#include<bits/stdc++.h>
using namespace std;
bool CheckPalindrome(int n)
{
    int original = n, reversed = 0;
    while(n>0)
        {
        reversed = reversed * 10 + n % 10;
        n /= 10;
       }
    return original == reversed;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"The maximum number : "<<arr[n-1]<<endl;
    cout<<"The minimum number : "<<arr[0]<<endl;
    int counnt=0;
    int prime_count=0;
    for(int i=0;i<n;i++)
    {
        if((arr[i]==2)||(arr[i]!=1&&arr[i]%2!=0))
        {
            counnt++;
        }
    }
    cout<<"The number of prime numbers : "<<counnt<<endl;
    int palin=0;
    for(int i=0;i<n;i++)
    {
        if(CheckPalindrome(arr[i]) == 1)
        {
            palin++;
        }
    }
    cout<<"The number of palindrome numbers : "<<palin<<endl;
    int numdiv=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]%i==0)
        {
            numdive++;
        }
    }
    cout<<"The number that has the maximum number of divisors : "<<numdiv<<endl;

}

