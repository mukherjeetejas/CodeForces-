//Author Tejas K Mukherjee
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        int sec=0;
        sec  = sec + abs(x2-x1);
        sec  = sec + abs(y2-y1);
        if (y2==y1 || x2==x1)
        cout<<sec<<'\n';
        else
        cout<<sec+2<<'\n';
    }
}
