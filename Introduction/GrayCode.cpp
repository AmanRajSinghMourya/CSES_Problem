#include <vector>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> gray_code;
    gray_code.push_back("");
    for (int i = 0; i < n; i++)
    {
        int size = gray_code.size();
        // cout << "Size " << size << endl;

        for (int j = size - 1; j >= 0; j--)
        {
            gray_code.push_back(gray_code[j]);
        }
        size *= 2;
        for (int j = 0; j < size; j++)
        {
            if (j < gray_code.size() / 2)
            {
                gray_code[j] += "0";
            }
            else
            {
                gray_code[j] += "1";
            }
            // cout << gray_code[j] << " ";
        }
    }
    for (auto x : gray_code)
        cout << x << endl;
    return 0;
}