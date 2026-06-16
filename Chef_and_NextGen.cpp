#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin>>caseTest;

    while(caseTest--){
        
        int A,B,X,Y;
        cin>>A>>B>>X>>Y;

        if(A*B<=X*Y)
        cout<<"Yes\n";

        else 
        cout<<"No\n";
    }
    return 0;
}