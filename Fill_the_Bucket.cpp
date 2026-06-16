#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseTime;
    cin >> caseTime;

    while (caseTime--)
    {
        int capacity, load;
        cin >> capacity >> load;
        
        cout << capacity - load << endl;
    }

    return 0;
}