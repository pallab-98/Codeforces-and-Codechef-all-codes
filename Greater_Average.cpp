#include <bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin>>caseTest;
    while (caseTest--){
        bool value=0;
        float A,B,C;
        cin>>A>>B>>C;
        if((A+B)/2>C){
        value=1;
        }
        if(value)
        cout<<"YES\n";
        else 
        cout<<"NO\n";
    }

   
    return 0;
}

