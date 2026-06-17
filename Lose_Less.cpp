#include <iostream>
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
        int match, point;
        cin >> match >> point;

        int w = 0;
        while (point - 2 * w > match)
            w++;

        cout << match - (point - 2 * w) << endl;
    }

    return 0;
}