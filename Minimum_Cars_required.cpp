#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int N;
        cin >> N;
        if (N % 4 != 0)
            cout << N / 4 + 1 << endl;
        else
            cout << N / 4 << endl;
    }
}