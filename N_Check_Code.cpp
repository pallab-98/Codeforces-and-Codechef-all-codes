#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int A, B;
    string S;
    cin >> A >> B >> S;

    if (S[A] != '-')
    {
        cout << "No\n";
        return 0;
    }
    for (int i = 0; i < S.size(); i++)
    {
        if (i == A)
            continue;
            
        if (!isdigit(S[i]))
        {
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";
    return 0;
}