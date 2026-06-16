#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

	int taka,laddo,jilabi=20;

	cin>>taka>>laddo;
	taka-=laddo*10;

    
	taka/=jilabi;

	cout<<taka<<endl;
	
	return 0;

}