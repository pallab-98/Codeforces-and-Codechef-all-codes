#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;
    
    int arr[caseTest];

    for (int i = 0; i < caseTest; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + caseTest);

    for (int i = 0; i < caseTest; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

/* int main()
 {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int &x : arr) cin >> x;

    sort(arr.begin(), arr.end());

    for (int x : arr) cout << x << "\n";
    return 0;
 } 
*/