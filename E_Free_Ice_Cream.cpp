#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;

    long long ice = x;
    int distress = 0;

    for (int i = 0; i < n; i++)
    {
        char type;
        long long d;
        cin >> type >> d;

        if (type == '+')
        {
            ice += d;
        }
        else
        {
            if (ice >= d)
            {
                ice -= d;
            }
            else
            {
                distress++;
            }
        }
    }

    cout << ice << " " << distress;
}