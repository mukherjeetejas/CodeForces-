//Author Tejas K Mukherjee
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll N;
        cin>>N;
        ll n = N/2;
        ll moves = 0;
        ll o =3;
        for (int i=1;i<=n;i++)
        {
            moves+=(4*o-4)*i;
            o+=2;
        }
        cout<<moves<<'\n';
    }
}
