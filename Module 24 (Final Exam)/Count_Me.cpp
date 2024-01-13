#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    cin.ignore();
    while (testCase--)
    {
        map<string, int> m;
        string s;
        getline(cin, s);

        stringstream ss(s);
        string word;
        pair<string,int> p;
        while (ss >> word)
        {
            m[word]++;
            if(p.second < m[word])
            {
                p.first = word;
                p.second = m[word];
            }
        }

        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}