#include <bits/stdc++.h>
using namespace std;

int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    if(!(cin>>T)||!(T>=1 && T<=1e3))
    return 0;

    while(T--)
    {
        int N;
        cin >> N;

        int sum = 0;

        while(N > 0)
        {
            sum += N % 10; 
            N /= 10;
        }

        cout << sum << endl;
    }

    return 0;
}