#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest, value = 0;
    cin >> caseTest;

    while (caseTest--)
    {
        string x;
        cin >> x;
        if (x == "Tetrahedron")
            value += 4;
        if (x == "Cube")
            value += 6;
        if (x == "Octahedron")
            value += 8;
        if (x == "Dodecahedron")
            value += 12;
        if (x == "Icosahedron")
            value += 20;
    }
    cout << value << endl;
    return 0;
}