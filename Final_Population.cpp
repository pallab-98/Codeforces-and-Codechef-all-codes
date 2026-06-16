#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseTime;
    cin >> caseTime;

    while (caseTime--)
    {
        int initiallyPeople, outOf, immigrated;
        cin >> initiallyPeople >> outOf >> immigrated;
        cout << (initiallyPeople + immigrated) - outOf << endl;
    }
    return 0;
}