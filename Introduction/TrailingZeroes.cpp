#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long ans = 0;
    long long power = 1;
    long long value = 0;
    while (value <= n)
    {
        value = pow(5, power++);
        ans = ans + n / value;
    }
    cout << ans;
    return 0;
}