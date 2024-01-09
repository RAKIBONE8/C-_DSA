#include <bits/stdc++.h>
using namespace std;

/*
void push_in_maxHeap(vector<int> &v,int cur_idx)
{

    if(cur_idx == 0)
    {
       return;
    }
    int p = (cur_idx - 1) / 2;
    if (v[p] < v[cur_idx])
    {
        swap(v[p], v[cur_idx]);
        push_in_maxHeap(v, p);
    }
    else return;

}*/

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    // push_in_maxHeap(v,cur_idx);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        v.push_back(x);
        int cur_idx = v.size() - 1;
        while (cur_idx != 0)
        {
            int p = (cur_idx - 1) / 2;

            if (v[p] > v[cur_idx])
            {
                swap(v[p], v[cur_idx]);
            }
            else
                break;
            cur_idx = p;
        }
    }

    for (int val : v)
    {
        cout << val << " ";
    }
    return 0;
}