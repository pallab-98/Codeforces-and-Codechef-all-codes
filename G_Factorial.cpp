#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseTest;
    cin >> caseTest;
    while (caseTest--) {
        int n;
        cin >> n;

       long long fac=1;
       
       for(int i=1;i<=n;i++)
       fac*=i;
       cout<<fac<<endl;
        
    }
    return 0;
}

/* long long fac = 1;

while (n > 0) {
    fac *= n;
    n--;
} */