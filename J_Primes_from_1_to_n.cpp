#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int num;
    cin >> num;

    if(num >= 2)
        cout << 2 << " ";

    for(int i = 3; i <= num; i++)
    {
        bool value = true;           
        for(int j = 2; j*j <= i; j++)
        {
            if(i % j == 0)
            {
                value = false;        
                
                
                break;

            }
        }
        if(value)
            cout << i << " ";
    }

    return 0;
}

/* #include<bits/stdc++.h>
using namespace std;
int prime(int n){
    if(n==2) return 1;
    else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0)
            return 0;
        }
        return 1;
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;
    
    for(int i=2;i<=n;i++){
        if(prime(i))
        cout<<i<<" ";
    }


    return 0;
} */