#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    int mishka = 0, chris = 0;

    while (caseTest--)
    {
        int m, c;
        cin >> m >> c;

        if (m > c)
            mishka++;

        else if (m < c)
            chris++;
    }
    
    if (mishka > chris)
        cout << "Mishka";

    else if (chris > mishka)
        cout << "Chris";

    else
        cout << "Friendship is magic!^^";

    return 0;
}