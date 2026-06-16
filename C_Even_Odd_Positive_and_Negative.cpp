#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, ev_count = 0, ne_count = 0, odd_count = 0, po_count = 0;
    cin >> n;

    vector<int> s(n);

    for (auto &x : s)
    {
        cin >> x;

        if (x % 2 == 0)
        {
            if (x >= 0)
            {
                ev_count++;
                if (x >= 1)
                    po_count++;
            }
            else
            {
                ev_count++;
                ne_count++;
            }
        }
        else
        {
            if (x >= 0)
            {
                odd_count++;
                if (x >= 1)
                    po_count++;
            }
            else
            {
                odd_count++;
                ne_count++;
            }
        }
    }
    cout << "Even: " << ev_count << endl;
    cout << "Odd: " << odd_count << endl;
    cout << "Positive: " << po_count << endl;
    cout << "Negative: " << ne_count << endl;

    return 0;
}