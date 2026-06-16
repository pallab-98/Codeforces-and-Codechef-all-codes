#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int N, A, B;
    cin >> N >> A >> B;

    int total = 0;

    for(int i = 1; i <= N; i++) {
        int num = i;
        int sum = 0;

        // digit sum বের করা
        while(num > 0) {
            sum += num % 10;
            num /= 10;
        }

        // condition check
        if(sum >= A && sum <= B) {
            total += i;
        }
    }

    cout << total << endl;
}