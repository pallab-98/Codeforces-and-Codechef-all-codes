#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin>>caseTest;
    
    while(caseTest--){
        int A,B,C,count=0;
        cin>>A>>B>>C;
        count=(A==0)+(B==0)+(C==0);

       cout << (count >= 2 ? "Water filling time\n" : "Not now\n");
    }
    
    
    

    return 0;
}
