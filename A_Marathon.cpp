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
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int cnt = 0;

        if (b > a)
            cnt++;
        if (c > a)
            cnt++;
        if (d > a)
            cnt++;

        cout << cnt << endl;
    }

    return 0;
}