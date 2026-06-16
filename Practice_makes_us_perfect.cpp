#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int count = 0;
    int problems_solved;
    
    // Loop 4 times to read P1, P2, P3, P4
    for (int i = 0; i < 4; ++i) {
        cin >> problems_solved;
        // If the number of problems solved is at least 10, increment the count
        if (problems_solved >= 10) {
            count++;
        }
    }
    
    cout << count << "\n";
   
    return 0;
}