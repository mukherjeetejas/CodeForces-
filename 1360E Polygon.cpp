//Author Tejas K Mukherjee
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define FOR(a,b) for(int i=a;i<b;i++)
#define FORE(a,b) for(int i=a;i<=b;i++)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n][n];
        string test;
        for (int i=0;i<n;i++)
        {
            cin>>test;
            for(int j=0;j<n;j++)
            {
                if (test[j]=='0')
                a[i][j]=0;
                else
                a[i][j]=1;
            }
        }
        /*for (int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
        }*/
        
        int c=0;
        for (int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if (a[i][j])
                {
                    if (!(a[i+1][j] || a[i][j+1]))
                        c=1;
                }
            }
        }
        if (c==1)
        cout<<"NO"<<'\n';
        else
        cout<<"YES"<<'\n';
    }
}
