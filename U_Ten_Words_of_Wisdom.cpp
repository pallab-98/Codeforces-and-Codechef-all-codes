#include <bits/stdc++.h>
using namespace std;

int main()
{
    int caseTest;
    cin >> caseTest;

    while (caseTest--)
    {
        int N, index, highest;
        cin >> N;
        index = highest = 0;

        for (int i = 1; i <= N; i++)
        {
            int a, b;
            cin >> a >> b;

            if (a <= 10 && b > highest)
            {
                highest = b;
                index = i;
            }
        }
        cout << index << endl;
    }

    return 0;
}