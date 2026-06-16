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
        int students, chairs;
        cin >> students >> chairs;

        if (students > chairs)
            cout << students - chairs << endl;
        else
            cout << "0\n";
    }
    return 0;
}