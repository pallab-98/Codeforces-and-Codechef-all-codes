#include <iostream>
using namespace std;

int main() {
    int t;
    if(!(cin>>t))
    return 0;
    for(int i=1;i<=t;i++){
        int x;
        if(!(cin>>x))
        return 0;
        if(x>=2000){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
        
    
	return 0;
}
