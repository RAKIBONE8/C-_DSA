#include <bits/stdc++.h>
using namespace std;
void insert_in_Heap(vector<int> &v, int x)
{

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
void Delete_in_Heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();

    int cur_idx = 0;
    while (true)
    {
        int left_idx = (cur_idx * 2) + 1;
        int right_idx = (cur_idx * 2) + 2;
        int last_idx = v.size() - 1;
        if (left_idx <= last_idx && right_idx <= last_idx)
        {
            if (v[left_idx] <= v[right_idx] && v[cur_idx] > v[left_idx])
            {
                swap(v[cur_idx], v[left_idx]);
                cur_idx = left_idx;
            }
            else if (v[right_idx] <= v[left_idx] && v[cur_idx] > v[right_idx])
            {
                swap(v[cur_idx], v[right_idx]);
                cur_idx = right_idx;
            }
            else
                break;
        }
        else if (left_idx <= last_idx)
        {
            if (v[left_idx] < v[cur_idx])
            {
                swap(v[cur_idx], v[left_idx]);
                cur_idx = left_idx;
            }
            else
                break;
        }
        else if (right_idx <= last_idx)
        {
            if (v[right_idx] < v[cur_idx])
            {
                swap(v[cur_idx], v[right_idx]);
                cur_idx = right_idx;
            }
            else
                break;
        }
        else
            break;
    }
}
void print_Heap(vector<int> v)
{
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        insert_in_Heap(v, x);
    }
    Delete_in_Heap(v);
    print_Heap(v);

    return 0;
}