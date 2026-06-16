#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin>>caseTest;

    while(caseTest--){
        
        float problems,solved;
        cin>>problems>>solved;

        if(problems/2<=solved)
        cout<<"YES\n";

        else 
        cout<<"NO\n";
    }
    return 0;
}