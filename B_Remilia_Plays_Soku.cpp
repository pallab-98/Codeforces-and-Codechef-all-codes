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
        long long position, Reimu, Remilia, moves, distance;
        cin >> position >> Reimu >> Remilia >> moves;

        distance = abs(Reimu - Remilia);
        distance = min(distance, position - distance);

        cout << distance + moves << endl;
    }

    return 0;
}