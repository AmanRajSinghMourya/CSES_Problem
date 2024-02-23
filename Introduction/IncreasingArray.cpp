#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n, x = 0, i;
    cin >> n;
    vector<long long> arr(n);
    for (i = 0; i < n; i++)
        cin >> arr[i];

    for (i = 1; i < n; i++)
        if (arr[i - 1] > arr[i])
        {
            x = x + (arr[i - 1] - arr[i]);
            arr[i] += (arr[i - 1] - arr[i]);
        }

    cout << x;
    return 0;
}