#include <bits/stdc++.h>
using namespace std;

int main()
{
    char key;

    if (!(cin >> key) || !(isalnum(key)))
        return 0;

    if (isalpha(key))
    {
        if (islower(key))
            cout << "ALPHA\nIS SMALL" << endl;
        else
            cout << "ALPHA\nIS CAPITAL" << endl;
    }
    else
        cout << "IS DIGIT" << endl;

    return 0;
}