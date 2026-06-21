#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long x, y;
    cin >> x >> y;

    bool cielTurn = true;

    while (true) {

        bool moved = false;

        if (cielTurn) {

            if (x >= 2 && y >= 2) {
                x -= 2;
                y -= 2;
                moved = true;
            }
            else if (x >= 1 && y >= 12) {
                x -= 1;
                y -= 12;
                moved = true;
            }
            else if (y >= 22) {
                y -= 22;
                moved = true;
            }

            if (!moved) {
                cout << "Hanako\n";
                return 0;
            }
        }
        else {

            if (y >= 22) {
                y -= 22;
                moved = true;
            }
            else if (x >= 1 && y >= 12) {
                x -= 1;
                y -= 12;
                moved = true;
            }
            else if (x >= 2 && y >= 2) {
                x -= 2;
                y -= 2;
                moved = true;
            }

            if (!moved) {
                cout << "Ciel\n";
                return 0;
            }
        }

        cielTurn = !cielTurn;
    }
    return 0;
}