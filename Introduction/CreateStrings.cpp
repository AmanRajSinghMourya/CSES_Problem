#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    vector<string> ans;
    ans.push_back(str);
    while (next_permutation(str.begin(), str.end()))
        ans.push_back(str);

    cout << ans.size() << endl;
    for (auto x : ans)
        cout << x << endl;
    return 0;
}