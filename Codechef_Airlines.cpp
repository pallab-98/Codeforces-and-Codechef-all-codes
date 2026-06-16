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
        int capacity, pasengers, ticketPrice;
        cin >> capacity >> pasengers >> ticketPrice;
        
        if (capacity * 10 >= pasengers)
            cout << pasengers * ticketPrice << endl;
        else
            cout << (capacity * 10) * ticketPrice << endl;
    }
    return 0;
}