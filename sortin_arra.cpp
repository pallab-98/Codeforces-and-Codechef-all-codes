#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout << "Enter array index numbers : " << endl;
    cin >> n;
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ara[i];
    }

    sort(ara, ara + n);
    for (int i = 0; i < n; i++)
    {
        cout << ara[i]<<" ";
    }

    return 0;
}