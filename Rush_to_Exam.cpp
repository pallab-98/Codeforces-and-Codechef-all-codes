#include <bits/stdc++.h>
using namespace std;
int main()
{

    int hours, totalPages, readAble;
    cin >> hours >> totalPages >> readAble;
    if ((hours * readAble) >= totalPages)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}