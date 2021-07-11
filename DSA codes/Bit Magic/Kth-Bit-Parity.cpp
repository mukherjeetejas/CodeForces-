//Author Tejas K Mukherjee
#include <iostream>
using namespace std;
//Right shift by K-1 and "AND" operation with 1 reveals if the Kth bit is set or not
string countSetBits(int n, int k)
{
    if (n >> (k - 1) & 1)
        return "Set";

    else
        return "Not set";
}

int main()
{
    int n, k;
    cout << "Enter a Number : ";
    cin >> n;
    cout << "Enter value of K : ";
    cin >> k;
    cout << countSetBits(n, k);
    return 0;
}
