#include <bits/stdc++.h>
using namespace std;
int main()
{
    int CaseTest;
    cin >> CaseTest;
    while (CaseTest--)
    {
        int A, B;
        cin >> A >> B;
        if (A > B)
            cout << ">\n";
        else if (A < B)
            cout << "<\n";
        else
            cout << "=\n";
    }
    return 0;
}
