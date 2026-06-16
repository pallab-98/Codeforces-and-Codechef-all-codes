#include <bits/stdc++.h>
using namespace std;
int main()
{

    int chefSell, chefinaSell, sellingPrice;
    if (!(cin >> chefSell >> chefinaSell >> sellingPrice))
        return 0;
    else if (chefSell >= 1 && chefSell != chefinaSell)
    {
        cout << max((chefSell * sellingPrice), (chefinaSell * sellingPrice)) << endl;
    }

    return 0;
}