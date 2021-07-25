//Count number of bits to be flipped to convert A to B
//Author Tejas K Mukherjee
#include <iostream>
using namespace std;
/* XOR gives TRUE for dissimilar bits*/
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

int countBitsFlips(int a, int b)
{
    return countSetBits(a ^ b);
}

int main()
{
    int p, q;
    cout << "Enter the numbers : ";
    cin >> p >> q;
    cout << countBitsFlips(p, q);
}