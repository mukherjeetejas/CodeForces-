//Author Tejas K Mukherjee
/* The question is supposed to be solved in Kotlin. This is the c++ solution.*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define FOR(a,b) for(int i=a;i<b;i++)
#define FORE(a,b) for(int i=a;i<=b;i++)
set<int> convertToSet(vector<int> v) 
{ 
    // Declaring the set 
    // using range of vector 
    set<int> s(v.begin(), v.end()); 
  
    // Return the resultant Set 
    return s; 
} 
int main()
{
    int n;
    cin>>n;
    vector <int> v;
    int num;    
    FOR (0,n)
    {
        cin>>num;
        v.push_back(num);
    }
    int i=0;
    set <int> s = convertToSet(v);
    if (s.size()<3)
        cout<<"-1 -1 -1";
    else 
    {
        for (auto it = s.begin(); it!=s.end(); ++it)
        {   if (i!=3){
            int p = *it;
            auto itr = find(v.begin(), v.end(), p);
            cout << distance(v.begin(), itr)+1<<" ";
            i++;
        }}
    }
}