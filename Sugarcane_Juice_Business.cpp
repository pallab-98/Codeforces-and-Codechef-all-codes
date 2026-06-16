#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTime;
    cin>>caseTime;
    
    while(caseTime--){

        int x;
        cin>>x;
        x*=50;
        int discon=(x*7)/10;
        cout<<x-discon<<endl;
    }
    return 0;
}