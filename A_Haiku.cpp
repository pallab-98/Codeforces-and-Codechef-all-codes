#include <bits/stdc++.h>
using namespace std;

int countVowel(string s)
{
    int cnt = 0;

    for (char ch : s)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u')
            cnt++;
    }

    return cnt;
}

int main()
{
    string s1, s2, s3;

    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);

    if (countVowel(s1) == 5 &&
        countVowel(s2) == 7 &&
        countVowel(s3) == 5)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}