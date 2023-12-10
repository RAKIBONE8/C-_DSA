#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> v(26, 0);

    for (int i = 0; i < s.length(); i++)
    {
        int index = s[i] - 97;
        v[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (v[i] != 0)
        {
            cout << char(i + 97) << " : " << v[i] << endl;
        }
    }

    return 0;
}