#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    
       int n;
       cin>>n;
       
       for(int i=1;i<=12;i++){
        int value=i*n;
        cout<<n<<" * "<<i<<" = "<<value<<endl;
       }
    
    return 0;
}