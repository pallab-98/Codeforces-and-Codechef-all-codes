#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, i = 0;
    cin >> n;
    vector<int> s;

    while (i < n)
    {
        int x;
        cin >> x;
        s.push_back(x);

        if (s[i] <= 10)
            cout << "A[" << i << "]" << " = " << x << endl;
        i++;
    }
    return 0;
}