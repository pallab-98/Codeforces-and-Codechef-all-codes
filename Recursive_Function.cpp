#include <bits/stdc++.h>
using namespace std;
void recur(int n)
{
    if (n == 0)
        return;
    recur(n-1);
    cout<<n<<endl;
}
int main()
{

    int n;
    cout << "Enter n value for recursive fucntion call" << endl;
    cin >> n;
    recur(n);

    return 0;
}
