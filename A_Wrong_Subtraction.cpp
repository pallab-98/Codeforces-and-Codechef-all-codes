#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int num,casetime;
    cin>>num>>casetime;
    
    while(casetime--){
        if(num%10!=0){
            num-=1;
        }
        else{
            int tep;
            num/=10;
        }
        
    }
    cout<<num<<endl;

    return 0;
}