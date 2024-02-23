#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr(27, 0);
    string s;
    cin >> s;
    // to count odd number of alphabet
    int odd = 0;
    // to track the index of alphabet with odd count
    int oddindex = -1;
    string ans = "";
    string ostr = "";

    for (size_t i = 0; i < s.size(); i++)
        arr[s[i] - 'A']++;

    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 1)
        {
            odd++;
            oddindex = i;
        }
        if (odd > 1)
        {
            oddindex = -1;
            cout << "NO SOLUTION" << endl;
            return 0;
        }
        else
        {
            if (arr[i] % 2 == 0)
            {
                string str(arr[i] / 2, char('A' + i));
                ans += str;
            }
            else
            {
                string str(arr[i], char('A' + i));
                ostr += str;
            }
        }
    }
    string temp = ans;

    reverse(temp.begin(), temp.end());
    if (oddindex != -1)
        ans = ans + ostr;
    ans = ans + temp;
    cout << ans << endl;
    return 0;
}