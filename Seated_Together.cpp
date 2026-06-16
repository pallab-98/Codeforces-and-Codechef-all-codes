#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int seat;
    cin >> seat;

    if (seat % 5 == 0)
        cout << "No"<<endl;
    else
        cout << "Yes"<<endl;

    return 0;
}