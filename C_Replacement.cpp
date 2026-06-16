#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int index;
    cin >> index;

    vector<int> s;

    int i = 0;
    while (i < index)
    {
        int x;
        cin >> x;

        if (x == 0)
            s.push_back(0);

        else if (x < 0)
            s.push_back(2);
            
        else
            s.push_back(1);
        i++;
    }

    for (int x : s)
        cout << x << " ";
    cout << "\n";
}