#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int arrySize,even,odd,n;
    even=odd=n=0;
    
    cin>>arrySize;
    int arr[arrySize];

    while (n<arrySize)
    {   
        cin>>arr[n];

        if(arr[n]%2==0)
        even++;
        else 
        odd++;

        n++;
    }
    if(even>odd)
    cout<<"READY FOR BATTLE\n";
    else 
    cout<<"NOT READY\n";
    

    return 0;
}
