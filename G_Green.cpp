#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int truck;
    cin >> truck;

    map<int, int> freq;

    while (truck--) {
        int type, x;
        cin >> type >> x;

        if (type == 1) {
            // add x
            freq[x]++;
        } 
        else {
            // print count of x
            cout << freq[x] << "\n";
        }
    }

    return 0;
}
    
  