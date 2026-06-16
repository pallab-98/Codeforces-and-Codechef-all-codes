#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int num;
    cin >> num;
    if (num == 1)
        cout << 1;

    else if (num <= 3)
        cout << "NO SOLUTION\n";
    else
    {
        
        for (int i = 2; i <= num; i += 2)
            cout << i << " ";

        for (int i = 1; i <= num; i += 2)
            cout << i << " ";
    }
    return 0;
    
}
