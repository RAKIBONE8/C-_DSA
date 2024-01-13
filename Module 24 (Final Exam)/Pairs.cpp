#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int num;

    Student(string name, int n)
    {
        this->name = name;
        this->num = n;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.name > b.name)
            return true;
        else if (a.name < b.name)
            return false;
        else
        {
            if (a.num < b.num)
                return true;
            else
                return false;
        }
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int n;
        cin >> name >> n;
        Student obj(name, n);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().num << endl;
        pq.pop();
    }
    return 0;
}