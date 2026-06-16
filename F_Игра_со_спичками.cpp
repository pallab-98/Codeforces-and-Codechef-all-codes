#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10005;
bool isPrime[MAXN];
int dp[MAXN];

void sieve()
{
    fill(isPrime, isPrime + MAXN, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i < MAXN; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < MAXN; j += i)
                isPrime[j] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    sieve();

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = 0;

        for (int take = 1; take <= 3; take++)
        {
            if (i - take >= 0 && !isPrime[i - take])
            {
                if (dp[i - take] == 0)
                {
                    dp[i] = 1;
                    break;
                }
            }
        }
    }

    if (dp[n])
        cout << 1;
    else
        cout << 2;
}