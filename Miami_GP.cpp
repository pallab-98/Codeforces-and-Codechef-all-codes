#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    // Optimization for fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; // Renamed from caseTest for convention
    cin >> T;

    while (T--)
    {
        int X, Y;
        cin >> X >> Y;
        
        // Chef qualifies if Y <= 1.07 * X, which is equivalent to 100*Y <= 107*X
        if (100 * Y <= 107 * X)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}