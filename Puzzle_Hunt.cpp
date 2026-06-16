#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int people;
    if (!(cin >> people) || !(people >= 1 && people <= 10))
        return 0;
    if (people >= 6 && people <= 8)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}