#include <bits/stdc++.h>
using namespace std;

bool ask(int a, int b)
{
    cout << "query " << a << " " << b << endl;
    cout.flush();

    string res;
    cin >> res;

    return res == "first";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; i++)
        p[i] = i + 1;

    stable_sort(p.begin(), p.end(), [](int a, int b)
                {
        cout << "query " << a << " " << b << endl;
        cout.flush();
        string res;
        cin >> res;
        return res == "first"; });

    cout << "answer ";
    for (int x : p)
        cout << x << " ";
    cout << endl;

    cout.flush();

    return 0;
}