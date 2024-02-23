<<<<<<< HEAD
#include <iostream>
using namespace std;
const unsigned int M = 1000000007;
int main()
{
    long long n, ans = 2;
    cin >> n;
    for (int i = 1; i < n; i++)
        ans = (ans * 2) % M;
    cout << ans;
    return 0;
=======
#include <iostream>
using namespace std;
const unsigned int M = 1000000007;
int main()
{
    long long n, ans = 2;
    cin >> n;
    for (int i = 1; i < n; i++)
        ans = (ans * 2) % M;
    cout << ans;
    return 0;
>>>>>>> 750c0b0b8708671a9d43e963b923e9c226777658
}