#include<bits/stdc++.h>
using namespace std;
#define FOR(a,b) for(int i=a;i<b;i++)
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n;
        int test;
        ll e1=0,e2=0,o1=0,o2=0;
        FOR(0,n)
        {
            cin>>test;
            if (test&1) 
            o1++;
            else 
            e1++;
        }
        cin>>m;
        FOR(0,m)
        {
            cin>>test;
            if (test&1) 
            o2++;
            else 
            e2++;
        }
        cout<<e1*e2+o1*o2<<'\n';
    }
}