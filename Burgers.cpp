#include <bits/stdc++.h>
using namespace std;

int main()
{
    int caseTest, patties, buns;
    cin >> caseTest;
    while (caseTest--)
    {
        cin >> patties >> buns;
        cout << min(patties, buns) << endl;
    }
    return 0;
}
