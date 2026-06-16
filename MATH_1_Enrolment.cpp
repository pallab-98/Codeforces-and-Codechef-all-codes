#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseTest;
    cin >> caseTest;
    while (caseTest--)
    {
        int sets, students;
        cin >> sets >> students;
        if (students >= sets)
            cout << students - sets << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}