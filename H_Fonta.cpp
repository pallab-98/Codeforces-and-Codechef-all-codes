#include<bits/stdc++.h>
using namespace std;
int main(){

    string S;
    cin>>S;
    if(S[S.length()-3]=='n'&&S[S.length()-2]=='t'&&S[S.length()-1]=='a')
    cout<<"Yes"<<endl;
    else 
    cout<<"No"<<endl;

    return 0;
}