//Powert set of a string
//Author Tejas K Mukherjee
#include <iostream>
#include <math.h>
using namespace std;
/* Every subset is depicted by a binary between [0-2^n-1] */

void powerset(string str)
{
    int n = str.length();
    int size = pow(2, n);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                cout << str[j];
        }
        cout << "\n";
    }
}

int main()
{
    string str;
    cout << "String : ";
    cin >> str;
    powerset(str);
}