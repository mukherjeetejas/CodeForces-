/*Author Tejas K Mukherjee*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define FOR(a,b) for(int i=a;i<b;i++)
#define FORE(a,b) for(int i=a;i<=b;i++)
int main()
{
    int n;
    cin>>n;
    int test;
    int x,y,odd=0,even=0;
    FORE(1,n)
    {
        cin>>test;
        if (test & 1)
        {
            odd++;
            x = i;
        }
        else
        {
            even++;
            y =i;
        }
    }
    cout << (odd==1?x:y)<<'\n';
}
