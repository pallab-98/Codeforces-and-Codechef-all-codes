#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest, count = 0;
    cin >> caseTest;
    bool value=0;
    while (caseTest--)
    {
        count++;
        
        if (count % 2 == 0){
            cout << count << endl;
        value = true;
        }
            
    }
    if(value!=1){
        cout<<-1<<endl;
    }

    return 0;
}