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
        int A, B;
        cin >> A >> B;

        if (A*100>=B*10)
            cout << "Cloth\n";
        else
            cout << "Disposable\n";
    }
    return 0;
}