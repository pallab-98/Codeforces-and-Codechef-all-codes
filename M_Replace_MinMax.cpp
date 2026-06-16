#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int ind;
    cin >> ind;

    int ara[ind];
    
    for (int i = 0; i < ind; i++)
        cin >> ara[i];

    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < ind; i++)
    {
        if (ara[i] < ara[minIndex])
            minIndex = i;

        if (ara[i] > ara[maxIndex])
            maxIndex = i;
    }
    swap(ara[minIndex], ara[maxIndex]);

    for (int value : ara)
        cout << value << " ";

    return 0;
}