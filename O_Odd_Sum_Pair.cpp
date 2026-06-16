#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string checkOddPairs(int a, int b, int c)
    {
        if ((a % 2 + b % 2 + c % 2) == 0 || (a % 2 + b % 2 + c % 2) == 3)
        {
            return "NO";
        }
        else
        {
            return "YES";
        }
    }
};
void solve()
{
    int t;
    cin >> t;
    Solution obj;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << obj.checkOddPairs(a, b, c) << " \n";
    }
}
