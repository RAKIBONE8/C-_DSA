#include <bits/stdc++.h>
using namespace std;
void Display(list<int> ll)
{
    cout << "L -> ";
    while (!ll.empty())
    {
        cout << ll.front() << " ";
        ll.pop_front();
    }
    cout << endl;
}
void revDisplay(list<int> &ll)
{
    auto it = ll.rbegin();

    while (it != ll.rend())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;
}
int main()
{
    
    int Query;
    cin >> Query;

    list<int> myll;
    while (Query--)
    {

        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            myll.push_front(v);
        }
        else if (x == 1)
        {
            myll.insert(next(myll.begin(), myll.size()), v);
        }
        else if (x == 2)
        {

            // if (v == 0)
            // {
            //     myll.pop_front();
            // }
            if (v == myll.size() - 1)
            {
                myll.pop_back();
            }
            else if (v >= 0 && v < myll.size())
            {
                myll.erase(next(myll.begin(), v));
            }
            else
            {
                Display(myll);
                cout << "R -> ";
                revDisplay(myll);
                continue;
            }
        }

        Display(myll);
        cout << "R -> ";
        revDisplay(myll);
    }
    return 0;
}
