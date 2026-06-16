#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseTest, count = 0,total;

    cin >> caseTest;

    total = caseTest;

    while(caseTest--)
    {
        char cha;
        cin >> cha;

        if(cha == 'A')
            count++;
    }

    int danik = total - count;

    if(count > danik)
        cout << "Anton\n";

    else if(count == danik)
        cout << "Friendship\n";

    else
        cout << "Danik\n";

    return 0;
}