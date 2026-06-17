#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int value1, value2;
    cin >> value1 >> value2;

    if (abs(value1 - value2) <= 2)
        cout << "Interesting"<<endl;
    else
        cout << "Boring"<<endl;

    return 0;
}