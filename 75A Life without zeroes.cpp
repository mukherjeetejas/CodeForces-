//Author Tejas K Mukherjee
#include<bits/stdc++.h>
using namespace std;
int nozeroes(int n)
{
    int result=0, count, curr;
    count = 0;
    while(n>0)
    {
        curr=n%10;
        if(curr!=0)
        {
            result += curr * pow(10,count);
            count++;
        }
        n=n/10;
    }
    if (result==0)
    return n;
    else 
    return result;
}
int main()
{
    int num1,num2,res;
    cin>>num1>>num2;
    res=num1+num2;
    if(nozeroes(res)==nozeroes(num1)+nozeroes(num2))
    cout<<"YES";
    else
    cout<<"NO";
}
