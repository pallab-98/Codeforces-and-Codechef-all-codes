#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    cin >> N;

    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N; col++)
        {

            // Center
            if (row == col && row == N / 2)
            {
                cout << "X";
            }
            // Marown drowagonal
            else if (row == col)
            {
                cout << "\\";
            }
            // Secondary drowagonal
            else if (row + col == N - 1)
            {
                cout << "/";
            }
            // Other posrowtrowons
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
/* Final Trick
i == j → \
i + j == N - 1 → /
i == j == N/2 → X
else → *
 */