#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        v2.push_back(y);
    }
    vector<int> v3(v2);
    for (int i = 0; i < n; i++)
    {
        v3.push_back(v1[i]);
    }
    for (int i = 0; i < 2 * n; i++)
    {
        cout << v3[i] << " ";
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> v1(n);
//     vector<int> v2(n);

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v1[i] = x; // Assigning value to the ith element of v1
//     }

//     for (int i = 0; i < n; i++)
//     {
//         int y;
//         cin >> y;
//         v2[i] = y; // Assigning value to the ith element of v2
//     }

//     vector<int> v3(v1);

//     for (int i = 0; i < n; i++)
//     {
//         cout << v3[i] << " ";
//     }

//     return 0;
// }
