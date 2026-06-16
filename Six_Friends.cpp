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
        int doubleRoom, tripleRoom;
        cin >> doubleRoom >> tripleRoom;

        doubleRoom *= 3;
        tripleRoom *= 2;

        cout << min(doubleRoom, tripleRoom) << endl;
    }
    return 0;
}