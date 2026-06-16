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
        string A, B;
        int A1, A2, A3, B1, B2, B3;
        cin >> A1 >> A2 >> A3 >> B1 >> B2 >> B3;

        A = to_string(A3) + to_string(A2) + to_string(A1);
        B = to_string(B1) + to_string(B2) + to_string(B3);

        sort(A.rbegin(), A.rend());
        sort(B.rbegin(), B.rend());

        long long numA, numB;
        numA = stoll(A);
        numB = stoll(B);

        if (numA > numB)
            cout << "Alice\n";
        else if (numA < numB)
            cout << "Bob\n";
        else
            cout << "Tie\n";
    }
    return 0;
}

/*
amake string basic theke shikhao amr
to_string ,push_string
mane ekta shonkhaken string banano ba make string  */

/*  while (caseTest--)

    {
        vector<int> a(3), b(3);
        for(int i = 0; i < 3; i++) cin >> a[i];
        for(int i = 0; i < 3; i++) cin >> b[i];

        // Sort both in descending order to get the maximum possible number
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());

        // Compare the sorted digits lexicographically
        if (a > b) cout << "Alice\n";
        else if (b > a) cout << "Bob\n";
        else cout << "Tie\n";
    } */