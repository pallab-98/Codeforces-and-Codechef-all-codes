#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int loopValue, taxtBook, readPages, days;
    cin >> loopValue;
    for (int i = 1; i <= loopValue; i++)
    {
        cin >> taxtBook >> readPages >> days;

        if ((readPages * days) >= taxtBook)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}