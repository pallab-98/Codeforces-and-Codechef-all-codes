#include <bits/stdc++.h>
#include <string.h>
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
        int n;
        cin >> n;
        bool value = 0;
        string s;
        cin>>s;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[0])
            {
                value = 1;
                break;
            }
        }
        cout<<value<<endl;
    }
    return 0;
}