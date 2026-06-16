#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest,count=0;
    cin >> caseTest;

    while (caseTest--)
    {
       int A,B,C,D;
       cin>>A>>B>>C>>D;
       
       count=(A==0)+(B==0)+(C==0)+(D==0);
       if(count==4)
       cout<<"IN\n";
       else 
       cout<<"OUT\n";

    }
    return 0;
}
