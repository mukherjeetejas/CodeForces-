#include <iostream>
#include<math.h>
#include<cmath>
using namespace std;

int ordinary(long long int n) {
    long long int org = n;
    int digits = log10(n) + 1;
    if (digits == 1)
        return org;
    int total = 9 * (digits - 1);
    int created = 0;
    for (int i=0;i<digits;i++){
        created = created + pow(10,i);
    }
    int org_created = created;
    int here=0;
    while (org>=created){
        here++;
        created = (here+1) * org_created;
    }
    return total+here;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        cout<<ordinary(n)<<'\n';
    }
}
