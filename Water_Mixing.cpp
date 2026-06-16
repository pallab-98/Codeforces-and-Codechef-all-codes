#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;
    while (caseTest--)
    {
        int A, B, X, Y;
        cin >> A >> B >> X >> Y;
        if (B >= A)
        {
            if (B - A <= X)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            if (A - B <= Y)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}