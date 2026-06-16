#include <bits/stdc++.h>
using namespace std; 
int main() 
{ 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    set<int> s;

    for (int i = 0; i < n; i++) 
    { 
        int x; 
        cin >> x;
        s.insert(x); // duplicate auto remove 
    } 
 
    cout << s.size() << '\n'; // distinct count 

    return 0;
}