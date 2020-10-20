#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int digit, len=0;
        while(n>0)
        {
            digit = n % 10;
            n /=10;
            len++;
        }
        int press=0;
        press += 10 * (digit-1);
        for (int i = 1; i<=len; i++)
        {
            press += i;
        }
        cout<<press<<'\n';
    }
}