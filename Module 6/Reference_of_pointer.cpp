#include <bits/stdc++.h>
using namespace std;
void funcn(int *&p)
{
    cout << &p << endl;
}

int main()
{
    int val = 18;
    int *ptr = &val;

    funcn(ptr);
    cout << &ptr << endl;

    return 0;
}