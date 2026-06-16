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

        int len1, len2, shortlen;
        cin >> len1 >> len2;
        shortlen = min(len1, len2);

        string name1, name2;
        cin >> name1 >> name2;

        for (int i = 0; i < shortlen; i++)
            if (name1[i] == name2[i])
                cout << name1[i];
            else
                break;
        cout << endl;
    }

    return 0;
}