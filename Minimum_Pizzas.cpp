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
       int friends,pizzas;
       cin>>friends>>pizzas;

       if((friends*pizzas)%4!=0)
       cout<<((friends*pizzas)/4)+1<<endl;
       
       else 
       cout<<((friends*pizzas)/4)<<endl;
    }
    return 0;
}
