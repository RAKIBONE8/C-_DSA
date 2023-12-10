#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) // O(n)
    {
        cin >> a[i];
    }
    int s = 0;
    for (int i = 0; i < n; i++) // O(n)
    {
        s += a[i];
    }
    cout << s << endl;

    // total complexity is - O(n) + O(n) = O(n + n) = O(2n) = O(n) |
    // Ignore constant values
    return 0;
}