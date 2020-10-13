#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    if(n>=k) cout<<(k-1)/2<<endl;
     else if (n*2>k) cout<<n-k/2<<endl;
     else cout<<0<<endl;
    return 0;
}