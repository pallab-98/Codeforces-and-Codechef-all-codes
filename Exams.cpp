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
        int schools,students,passed;
        cin>>schools>>students>>passed;
        
        if((schools*students)/2<passed)
        cout<<"YES\n";
        else 
        cout<<"NO\n";
    }   

    return 0;
}
