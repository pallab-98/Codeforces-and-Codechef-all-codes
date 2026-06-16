#include <bits/stdc++.h>
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
        int geyser, bucket;
        cin >> geyser >> bucket;
        cout << geyser / (bucket * 2) << endl;
    }
    return 0;
}
