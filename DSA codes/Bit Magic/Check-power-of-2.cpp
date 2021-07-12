//Author Tejas K Mukherjee
#include <iostream>
using namespace std;
//Right shift by K-1 and "AND" operation with 1 reveals if the Kth bit is set or not
bool powerOfTwo(int n)
{
    return !(n & (n - 1));
}

int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    cout << powerOfTwo(n);
    return 0;
}
