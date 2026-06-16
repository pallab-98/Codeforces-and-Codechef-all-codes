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
        int x, y;
        cin >> x >> y;

        if (x < y)
            cout << x << " " << y << endl;
        else
            cout << y << " " << x << endl;
    }

    return 0;
}