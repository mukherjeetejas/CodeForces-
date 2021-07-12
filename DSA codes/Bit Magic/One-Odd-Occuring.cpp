//Author Tejas K Mukherjee
#include <iostream>
using namespace std;
/*XOR with itself gives zero, even occuring cancel each other out leaving only odd occuring at last*/
int oddOccuring(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int a[n];
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << oddOccuring(a, n);
    return 0;
}
