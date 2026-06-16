#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, positionValue, checkvalue, count = 0;
    cin >> n >> positionValue;
    int ara[n];

    positionValue -= 1;

    for (int i = 0; i < n; i++)
        cin >> ara[i];

    checkvalue = ara[positionValue];

    for (int i = 0; i < n; i++)
    {
        if (ara[i] >= checkvalue && ara[i] > 0)
            count++;
        else
            break;
    }
    cout << count << endl;
    return 0;
}

/*
{
    // your code goes here
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    int c = 0, x = a[k - 1];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= x && a[i] > 0)
            c++;
    }
    cout << c << endl;
 
}
*/