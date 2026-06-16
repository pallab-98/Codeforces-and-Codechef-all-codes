#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest, num = 1;
    cin >> caseTest;

    for (int i = 1; i <= caseTest; i++)
    {
        cout << num << " " << num + 1 << " " << num + 2 << " PUM" << endl;
        num += 4;
    }

    return 0;
}