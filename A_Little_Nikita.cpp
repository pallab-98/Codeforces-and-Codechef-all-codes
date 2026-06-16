#include <iostream>
using namespace std;

int main() {
    int caseTest;
    cin >> caseTest;

    while (caseTest--) {
        int n, m;
        cin >> n >> m;

        if (m <= n && (n - m) % 2 == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}