#include <bits/stdc++.h>
using namespace std;
int main()
{

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int num;
        cin >> num;
        if (num % 2 == 0 && num % 7 == 0)
            cout << "Alice\n";

        else if (num % 2 != 0 && num % 9 == 0)
            cout << "Bob\n";
        else
            cout << "Charlie\n";
    }
    

    return 0;
}