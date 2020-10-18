/*Author Tejas K Mukherjee*/
#include <bits/stdc++.h>

using namespace std;

string nopalindrome(int n)
{
    string a;
    for(int i=0;i<n;i++)
    {
        a+='a';
    }
    for (int i=1;i<n-1;i++)
    {   
        if (a[i+1]==a[i-1])
        {
            if (a[i-1]=='a')
                a[i+1]='b';
            else
                a[i+1]='a';
        }
    }
    return a;
}

int main()
{
    int n;
    cin>>n;
    cout<<nopalindrome(n);
    return 0;
}
