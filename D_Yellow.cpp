#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    set<int> s;
    int caseTest = 5;

    while (caseTest--)
    {

        int n;
        cin >> n;

        s.insert(n);
    }

    cout << s.size() << endl;

    return 0;
}
