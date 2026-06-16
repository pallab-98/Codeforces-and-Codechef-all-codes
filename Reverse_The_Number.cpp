#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (caseTest--)
    {
        string num;
        cin >> num;

        reverse(num.begin(), num.end());

        // Remove leading zeros
        int i = 0;
        while (i < num.size() && num[i] == '0')
        {
            i++;/*i jotogor porjonto zero ache totogor porjonto agiye niye aslam
                    mane leading zero skip */
        }

        // Print from first non-zero character
        if (i == num.size()) // যদি সব 0 হয়
            cout << "0\n";
        else
            cout << num.substr(i) << endl;
    }

    return 0;
}