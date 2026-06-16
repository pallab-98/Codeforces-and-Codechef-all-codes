#include <bits/stdc++.h>
using namespace std;

int GED(int a, int b)
{
    if (b == 0)
        return a;
    else
        return GED(b, a % b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int num1, numb2, gedvalue;
    cin >> num1 >> numb2;

    gedvalue = GED(num1, numb2);

    cout << gedvalue << endl;

    return 0;
}