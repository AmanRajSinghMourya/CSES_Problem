#include <climits>
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    long long i, sum = 1;
    char temp = s[0];
    long long maxi = sum;
    for (i = 1; i < s.size(); i++)
    {
        if (temp == s[i])
        {
            sum++;
            maxi = max(maxi, sum);
        }
        else
        {
            temp = s[i];
            sum = 1;
        }
    }
    cout << maxi;
}