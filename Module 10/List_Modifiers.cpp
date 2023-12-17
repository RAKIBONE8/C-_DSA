#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10,20,30,40,50,60,70};
    list<int> newList = {100, 200, 300};
    vector<int> v = {60, 70, 80};
    // newList = myList; shortcut
    // newList.assign(myList.begin(),myList.end()); long cut

    /*
     myList.push_back(100);
     myList.push_front(18);
     myList.push_front(12);
     myList.push_front(13);
     myList.push_front(19);
      myList.pop_back();
      myList.pop_back();
      myList.pop_front();
      myList.pop_front();

    myList.push_back(100);
    myList.push_back(18);
    myList.push_back(12);
    myList.push_back(13);
    myList.push_back(19);
    */

    myList.insert(next(myList.begin(),2),100);// inserting to the next of 2nd element
    // myList.erase(next(myList.begin(),2)); //erasing to the next of 2nd element

    // myList.insert(next(myList.begin(), 2), newList.begin(),newList.end());  inserting new List from begin to end

    // myList.insert(next(myList.begin(),2),v.begin(),v.end());
    // myList.erase(next(myList.begin(),2),next(myList.begin(),5));

    // replace(myList.begin(),myList.end(),30,100);
    for (int val : myList)
    {
        cout << val << " ";
    }

    // auto it = find(myList.begin(),myList.end(),601);

    // if(it == myList.end())
    // {
    //     cout<<"Not found";
    // }
    // else
    // {
    //     cout<<"Found";
    // }
    return 0;
}