#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s, s1;
    
    getline(cin, s);
    getline(cin, s1);

    cout << s.length() <<" "<< s1.size() << endl;
    cout << s + s1 << endl;
    char tem;
    tem = s[0];
    s[0] = s1[0];
    s1[0] = tem;
    cout << s << " " << s1 << endl;

    return 0;
}