#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin>>caseTest;

    while(caseTest--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.rbegin(), a.rend());

        set<int> dp;
        vector<int> ans;
        bool ok = true;

        for(int x : a)
        {
            if(dp.count(x))
            {
                ok = false;
                break;
            }

            vector<int> add;
            add.push_back(x);

            for(int s : dp)
            {
                if(s + x <= 20000)
                    add.push_back(s + x);
            }

            for(int v : add)
                dp.insert(v);

            ans.push_back(x);
        }

        if(!ok)
        {
            cout << -1 << "\n";
        }
        else
        {
            for(int x : ans)
                cout << x << " ";
            cout << "\n";
        }
    }

    return 0;
}