#include <iostream>
#include <set>
#include <string>
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
        string s;
        cin >> n >> s;

        set<string> st;

        for (int i = 0; i < n - 1; i++)
            st.insert(s.substr(i, 2));

        cout << st.size() << endl;
    }

    return 0;
}