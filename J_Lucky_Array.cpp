#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int ind;
    cin >> ind;
    vector<int> s(ind);

    for (int i = 0; i < ind; i++ )
        cin >> s[i];

    sort(s.begin(), s.end(),less<int>());

    int mini = s[0], count = 0;

    for (int value : s)
        if (value == mini)
            count++;

    if (count % 2 != 0)
        cout << "Lucky\n";
    else
        cout << "Unlucky\n";
    
    return 0;
}