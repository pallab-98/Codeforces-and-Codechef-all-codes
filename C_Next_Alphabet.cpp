#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a;
    if (!(cin >> a) || !isalpha(a))
        return 0;

    if (a == 'Z')
        cout << 'A';
    else if (a == 'z')
        cout << 'a';
    else
        cout << (char)(a + 1);

    return 0;
}