#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i,n) for(int i=0;i<n;i++)

void solve()
{
    int n, c=INT_MAX,b=-1;
    cin>>n;
    int a[n];
    map <int,int> m,np;
    forn (i,n){
        cin>>a[i];
        m[a[i]]++;
        if (m[a[i]]==1)
            np[a[i]]=i+1;
    }
    for(auto i:m){
        if (i.second==1){
            c=min(i.first,c);
            b=np[c];
        }
    }
    cout<<b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {    solve();
    }
}