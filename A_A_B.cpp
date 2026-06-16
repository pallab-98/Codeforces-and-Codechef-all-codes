#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int caseTest;
    cin >> caseTest;

    while(caseTest--)
    {
        string str;
        cin >> str;

        int a = str[0] - '0';
        int b = str[2] - '0';

        cout << a + b << endl;
    }

    return 0;
}