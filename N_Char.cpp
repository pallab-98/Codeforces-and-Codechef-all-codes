#include <bits/stdc++.h>
using namespace std;
int main()
{
    char character;
    cin >> character;
    if (isalpha(character))
    {
        if (isupper(character))
            cout << (char)tolower(character) << endl;
        else if (islower(character))
            cout << (char)toupper(character) << endl;
    }

    return 0;
}