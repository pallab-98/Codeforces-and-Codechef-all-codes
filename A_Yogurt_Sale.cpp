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
        int n, a, b;
        cin >> n >> a >> b;

        int cost;

        if (b < 2 * a)
            cost = (n / 2) * b + (n % 2) * a;
        else
            cost = n * a;

        cout << cost << endl;
    }

    return 0;
}