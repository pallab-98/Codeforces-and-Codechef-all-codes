#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A;
    cin >> A;
    for(int i=A;i>=1;i--){
        if(i==1){
            cout<<i;
            break;
        }
        cout<<i<<",";
    }

    return 0;
}