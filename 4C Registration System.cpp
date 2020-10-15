//Author Tejas K Mukherjee
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define FOR(a,b) for(int i=a;i<b;i++)
#define FORE(a,b) for(int i=a;i<=b;i++)

int main()
{
    int n;
    cin >> n;

    map<string, int> username;
    string s;
    while (n--)
    {
        cin >> s;
        if (username.count(s) == 0)
        {
            cout << "OK" << '\n';
            username[s] = 1;
        }
        else
        {
            cout << s << username[s] << endl;
            username[s] += 1;
        }
    }
    return 0;
}