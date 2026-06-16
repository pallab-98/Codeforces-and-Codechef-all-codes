#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    string newstr = "";

    for(int i = 0; i < 30; i++)
        newstr += "Yes";

    while(caseTest--)
    {
        string str;
        cin >> str;

        if(newstr.find(str) != string::npos)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }

    return 0;
}