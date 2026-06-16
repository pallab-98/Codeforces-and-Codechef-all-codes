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

        string s;
        cin >> s;
        int len = s.length();

        if (len > 10)
            cout << s[0] << len - 2 << s[len - 1] << endl;
        else
            
            cout << s << endl;
    
    }
    return 0;
}
        