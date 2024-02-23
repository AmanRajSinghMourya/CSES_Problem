#include <vector>
#include <iostream>

using namespace std;
int main()
{
    long long n;
    cin >> n;

    long long sum = n * (n + 1) / 2;

    if (sum % 2 == 0)
    {

        cout << "YES\n";

        // Initialize vectors for set1, set2, and a vector
        // to keep track of visited elements
        vector<int> set1, set2;
        vector<int> vis(n + 1, 0);

        // Initialize set1_sum and max_element
        long long set1_sum = 0;
        long long max_element = n;

        // Loop to fill set1
        while (set1_sum < sum / 2)
        {
            long long remaining_sum = sum / 2 - set1_sum;
            if (remaining_sum > max_element)
            {
                set1.push_back(max_element);
                vis[max_element] = 1;
                set1_sum += max_element;
                max_element--;
            }
            else
            {

                set1.push_back(remaining_sum);
                vis[remaining_sum] = 1;
                set1_sum = sum / 2;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (vis[i] == 0)
            {
                set2.push_back(i);
            }
        }

        cout << set1.size() << "\n";
        for (auto x : set1)
        {
            cout << x << " ";
        }
        cout << "\n";
        cout << set2.size() << "\n";
        for (auto x : set2)
        {
            cout << x << " ";
        }
    }
    else
    {
        cout << "NO";
    }
    return 0;
}