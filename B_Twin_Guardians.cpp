#include <bits/stdc++.h>
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
        int num1, num2;
        cin >> num1 >> num2;

        bool value1 = true, value2 = true;

        if (num1 <= 1)
            value1 = false;
        else
        {
            for (int i = 2; i * i <= num1; i++)
            {
                if (num1 % i == 0)
                {
                    value1 = false;
                    break;
                }
            }
        }

        if (num2 <= 1)
            value2 = false;
        else
        {
            for (int i = 2; i * i <= num2; i++)
            {
                if (num2 % i == 0)
                {
                    value2 = false;
                    break;
                }
            }
        }

        if ((value1 && value2) && (num2 - num1 == 2))
            cout << "Y\n";
        else
            cout << "N\n";
    }

    return 0;
}

/*
int caseTest;
    cin >> caseTest;

    while (caseTest--)
    {
        int num1, num2;
        cin >> num1 >> num2;

        if (isPrime(num1) && isPrime(num2) && num2-num1==2)
            cout << "Y\n";
        else
            cout << "N\n";
 */