#include <iostream>
using namespace std;

int main()
{
    long long n, i, temp;
    cin >> n;
    long long sum = 0;
    for (i = 1; i < n; i++)
    {
        cin >> temp;
        sum += temp;
    }
    cout << (n * (n + 1)) / 2 - sum << endl;
}