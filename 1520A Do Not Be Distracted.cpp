#include <iostream>
#include<map>

using namespace std;
string sus (string tasks)
{
    char prev;
    map <char,int> sol;
    for(int i=0;i<tasks.length();i++) 
    {
        if (sol[tasks[i]]==0) 
        {
            sol[tasks[i]]++;
        }
        else if (prev == tasks[i])
        {
            sol[tasks[i]]++;
        }
        else {
            return "NO";
        }
        prev = tasks[i];
    }
    return "YES";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string tasks;
        int num;
        cin>>num;
        cin>>tasks;
        cout<<sus(tasks)<<'\n';   
    }
}