#include<bits/stdc++.h>
using namespace std;
int main(){
    int g,s,b;
    cin>>g>>s>>b;
    if(g>=5)
    g=0;
    else
    g=5-g;
    if(s>=5)
    s=0;
    else
    s=5-s;
    if(b>=5)
    b=0;
    else
    b=5-b;
    cout<<g+s+b<<endl;

    return 0;
}