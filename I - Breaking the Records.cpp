#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int index;
    cin >> index;

    vector<int> points(index);
    for (int i = 0; i < index; i++)
    {
        cin >> points[i];
    }

    int minPoint, minCount, maxPoint, maxCount;
    minPoint = maxPoint = points[0];
    
    minCount = maxCount = 0;

    for (int i = 1; i < index; i++) 
    {
        if (points[i] > maxPoint)
        {
            maxPoint = points[i];
            maxCount++;
        }
        else if (points[i] < minPoint) 
        {
            minPoint = points[i];
            minCount++;
        }
    }

    cout << maxCount << " " << minCount << endl;

    return 0;
}
