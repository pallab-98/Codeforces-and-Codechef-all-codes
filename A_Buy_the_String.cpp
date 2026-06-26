#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, c0, c1, h;
        scanf("%d %d %d %d", &n, &c0, &c1, &h);

        char s[1005];
        scanf("%s", s);

        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                ans += (c0 < h + c1) ? c0 : h + c1;
            else
                ans += (c1 < h + c0) ? c1 : h + c0;
        }

        printf("%lld\n", ans);
    }

    return 0;
}