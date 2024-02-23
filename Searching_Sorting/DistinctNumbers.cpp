#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long temp;
    set<long long> s;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        s.insert(temp);
    }
    cout << s.size() << endl;
    return 0;
}