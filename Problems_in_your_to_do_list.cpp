#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;
    
    while (caseTest--)
    {
        int size,value,count=0;
        cin>>size;
        int arr[size];

        for(auto i=0;i<size;i++){
            cin>>arr[i];

            if(arr[i]>=1000)
            count++;
        }
       
        cout<<count<<endl;  
    }

    return 0;
}

        /* input নেওয়া
        for(int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        check করা
        for(auto value : arr){
            if(value >= 1000)
                count++;
        }

        cout << count << endl; */
    