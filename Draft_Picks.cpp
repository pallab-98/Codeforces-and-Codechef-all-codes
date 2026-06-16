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
        int N, K;
        cin >> N >> K;

        vector<int> sum(N, 0);

        int card = K;
        bool forward = true;

        while (card > 0)
        {
            if (forward)
            {
                for (int i = 0; i < N && card > 0; i++)
                {
                    sum[i] += card;
                    card--;
                }
            }
            else
            
                for (int i = N - 1; i >= 0 && card > 0; i--)
                {
                    sum[i] += card;
                    card--;
                }
            

            forward = !forward;
        }

        cout << *max_element(sum.begin(), sum.end()) <<endl;;
    }

    return 0;
}