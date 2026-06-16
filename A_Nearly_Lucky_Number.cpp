#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string num;
    cin >> num;

    int count = 0;

    for (char c : num)
    {
        if (c == '4' || c == '7')
        {
            count++;
        }
    }

    
    if (count == 4 || count == 7 || count == 44 || count == 47 || count == 74 || count == 77)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

/* int count=0;
    for(char c:num){
        if(c=='4'||c=='7')
        count++;
    }

    string s = to_string(count);
    bool isLucky=true;

    for(char c:s){
        if(c!='4'&&c!='7'){
            isLucky=false;
            break;
        }
    }

    if(count&&isLucky>0)
    cout<<"YES\n";
    else
    cout<<"NO\n";
 */