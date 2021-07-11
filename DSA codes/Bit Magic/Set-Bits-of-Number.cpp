//Author Tejas K Mukherjee
#include <iostream>
using namespace std;
/* This function takes advantage of the fact that n&(n-1)
removes the last set bit of the number */
int countSetBits(int n)
{
    int res = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        res++;
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    cout << countSetBits(n);
    return 0;
}