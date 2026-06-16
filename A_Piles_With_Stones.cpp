#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;

    int sumX = 0, sumY = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sumX += x;
    }

    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        sumY += y;
    }

    if (sumY <= sumX)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}