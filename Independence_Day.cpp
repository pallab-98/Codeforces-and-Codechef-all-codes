#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    if(!(cin>>x))
    return 0;
    if(x>=1 && x<=31){
        if(x<=15){
            cout<<15-x<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    
    return 0;
}