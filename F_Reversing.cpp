#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    if (!(cin >> caseTest))
        return 0;

    vector<int> s;
    
    while (caseTest--)
    {
        int x;
        cin >> x, s.push_back(x);
    }
    reverse(s.begin(), s.end());

    for (int value : s)
        cout << value << " ";

    cout << endl;
    return 0;
}
