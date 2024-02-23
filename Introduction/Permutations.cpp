#include <iostream>
using namespace std;

int main()
{
    long long n, i;
    cin >> n;
    long long even_count, odd_count;
    // n is odd
    if (n == 1)
    {
        cout << n;
        return 0;
    }
    if (n <= 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    if (n & 1)
        odd_count = (n + 1) / 2;
    // n is even
    else
        odd_count = n / 2;
    even_count = n - odd_count;

    for (i = 1; i <= even_count; i++)
        cout << 2 * i << " ";
    for (i = 1; i <= odd_count; i++)
        cout << 2 * i - 1 << " ";
    return 0;
}