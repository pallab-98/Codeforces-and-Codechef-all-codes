#include <bits/stdc++.h>
using namespace std;

int main() 
{ 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int caseTest;
    cin >> caseTest;
    while (caseTest--)
    {
        int n, Alice, Bob;
        cin >> n >> Alice >> Bob;

        int dist = abs(Alice - Bob);
        if (dist % 2 == 0)
            cout << "YES\n";  // Alice wins
        else
            cout << "NO\n";   // Alice loses
    } 
    return 0; 
}