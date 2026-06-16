#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a1,a2,i1,i2;
    cin>>a1>>i1>>a2;
    if(a1+a2<i1)
    cout<<0<<endl;
    else
    cout<<(a1+a2)-i1+1<<endl;
    return 0;
}