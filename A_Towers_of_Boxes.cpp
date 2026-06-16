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
        int n, m, d;
        cin >> n >> m >> d;

        int maxHeight = d / m + 1;

        int towers = (n + maxHeight - 1) / maxHeight;

        cout << towers << endl;
    }

    return 0;
}