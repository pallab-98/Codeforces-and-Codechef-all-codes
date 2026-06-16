#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;
    cin >> str;

    stack<char> box;

    for (char c : str)
    {

        if (c == '(' || c == '[' || c == '{'){
            box.push(c);
        }

        else{

            if (box.empty())
            {
                cout << "No";
                return 0;
            }

        char top = box.top();

            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{'))
            {
                cout << "No";
                return 0;
            }

        box.pop();
         
        }
    }

    if (box.empty())
        cout << "Yes";
    else
        cout << "No";

    return 0;
}