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
        int worksHours,offDayHours;
        cin>>worksHours>>offDayHours;

        cout<<worksHours*4+offDayHours<<endl;
    }   

    return 0;
}
