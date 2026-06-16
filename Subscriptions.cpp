#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin>>caseTest;
    while (caseTest--){
        int group,subcrip,groupin;
        cin>>group>>subcrip;

        if(group<=6)
        cout<<subcrip<<endl;

        else if(group>6){
            groupin=group/6;
            if(group%6==0)
            cout<<groupin*subcrip<<endl;

            else if(group%6!=0)
            cout<<(groupin+1)*subcrip<<endl; 
        }

    }

   
    return 0;
}

