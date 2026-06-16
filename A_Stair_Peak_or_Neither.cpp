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
        int a, b, c;
        cin >> a >> b >> c;

        if (a < b && b < c)
            cout << "STAIR\n";

        else if (a < b && b > c)
            cout << "PEAK\n";

        else
            cout << "NONE\n";
    }

    return 0;
}