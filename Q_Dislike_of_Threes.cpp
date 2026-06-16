#include <bits/stdc++.h>
using namespace std;

int main()
{
    int caseTime;
    cin >> caseTime;

    while (caseTime--)
    {
        int N, count, num;
        cin >> N;
        count = num = 0;

        while (count < N)
        {
            num++;
            if (num % 3 != 0 && num % 10 != 3)
                count++;
        }
        cout << num << endl;
    }

    return 0;
}