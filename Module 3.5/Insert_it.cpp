#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        v1.push_back(e);
    }
    int m;
    cin >> m;
    vector<int> v2;
    for (int i = 0; i < m; i++)
    {
        int e;
        cin >> e;
        v2.push_back(e);
    }

    int x;
    cin >> x;
    v1.insert(v1.begin() + x, v2.begin(), v2.end());

    for (auto ele : v1)
    {
        cout << ele << " ";
    }
    return 0;
}