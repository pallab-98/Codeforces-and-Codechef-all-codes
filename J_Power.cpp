#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long A, B, value = 1;
    cin >> A >> B;

    for (int i = 1; i <= B; i++)
    {
        value *= A;
    }
    cout << value << endl;
    return 0;
}