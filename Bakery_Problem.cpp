#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int numCake, price;
    cin >> numCake >> price;
    cout << min(100 * numCake, price + 60 * numCake) << endl;

    return 0;
}
