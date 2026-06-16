#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2000000;

vector<int> divisors(MAXN + 1);

int main()
{
    // precompute divisor count
    for (int i = 1; i <= MAXN; i++)
    {
        for (int j = i; j <= MAXN; j += i)
        {
            divisors[j]++;
        }
    }

    int n;
    cin >> n;

    vector<int> a;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        int x = divisors[sum + 1]; // try from smallest possible

        // ensure 1 ≤ ai ≤ 300
        if (x > 300)
        {
            cout << "Sorry Kairosh\n";
            return 0;
        }

        a.push_back(x);
        sum += x;
    }

    for (int x : a)
        cout << x << " ";
}