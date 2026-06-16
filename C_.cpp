#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int num;
    cin >> num;

    int last2digit = num % 100;

    cout << 'K';

    if (last2digit < 10)
        cout << '0';

    cout << last2digit << endl;

    return 0;
    
}