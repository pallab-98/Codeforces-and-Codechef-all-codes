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
        int n, x;
        cin >> n >> x;

        if (n <= 2)
            cout << 1 << endl;
        else
            cout << (n - 3) / x + 2 << endl;
    }

    return 0;
}