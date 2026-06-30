#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> t=caseTest;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if (x % y == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}