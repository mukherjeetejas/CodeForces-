//Author Tejas Mukherjee
//Towers of Hanoi using recursion

#include <iostream>
using namespace std;

void towersOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        cout << "Move disk 1 from " << from_rod << " to " << to_rod << '\n';
        return;
    }
    else
    {
        towersOfHanoi(n - 1, from_rod, aux_rod, to_rod);
        cout << "Move disk " << n << " from " << from_rod << " to " << to_rod << '\n';
        towersOfHanoi(n - 1, aux_rod, to_rod, from_rod);
    }
}

int main()
{
    int n = 4;
    towersOfHanoi(n, 'A', 'B', 'C');
    return 0;
}
