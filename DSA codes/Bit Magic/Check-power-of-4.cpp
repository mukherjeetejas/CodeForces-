//Author Tejas K Mukherjee
#include <iostream>
using namespace std;
//Right shift by K-1 and "AND" operation with 1 reveals if the Kth bit is set or not
//Power of 4 has only 1 bit set and even zeroes after that one set bit
bool powerOfFour(int n)
{
    if (n & (n - 1))
        return 0;
    else
    {
        int c = 0;
        while (n != 0)
        {
            c++;
            n = n >> 1;
        }
        if (c & 1)
            return 1;
        else
            return 0;
    }
}

int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    cout << powerOfFour(n);
    return 0;
}
