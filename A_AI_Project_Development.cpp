#include<bits/stdc++.h>
using namespace std;
int  main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin>>caseTest;
    while (caseTest--)
    {
        int n,x,y,z;
        cin>>n>>x>>y>>z;

        int value=ceil(n/(x+y));
        if(value>=n)
        cout<<value;
        else{
            
        }

    }
    return 0;
    
}