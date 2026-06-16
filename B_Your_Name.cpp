#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int caseTest;
    cin >> caseTest;

    while (caseTest--)
    {
        int length;
        string first, last;

        cin >> length;
        cin >> first >> last;

        sort(first.begin(), first.end());
        sort(last.begin(), last.end());

        if (first == last)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}