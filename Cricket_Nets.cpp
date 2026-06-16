#include <bits/stdc++.h>
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
        int ball, sum = 0;
        cin >> ball;
        if (ball <= 20)
            sum += ball * 10;
        if (ball > 20)
        {
            ball -= 20;
            sum += (ball / 2) * 5;
            sum+=200;
        }
        cout << sum << endl;
    }

    return 0;
}