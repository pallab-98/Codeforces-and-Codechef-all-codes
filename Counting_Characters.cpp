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
        int length;
        string st;

        cin >> length;
        cin >> st;

        int countA = 0, countB = 0;

        for (char ch : st)
        {
            if (ch == 'a')
                countA++;
            else
                countB++;
        }

        cout << countA << " " << countB << "\n";
    }

    return 0;
}