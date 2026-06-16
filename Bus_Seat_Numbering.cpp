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
        int N;
        cin >> N;
        if (N <= 15)
        {
            if (N>=11&&N<=15)
                cout << "Lower Single\n";
            else
                cout << "Lower Double\n";
        }
        else
        {
            if (N>= 26 && N<=30)
                cout << "Upper Single\n";
            else
                cout << "Upper Double\n";
        }
    }
}