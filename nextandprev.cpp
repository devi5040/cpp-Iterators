#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int>::iterator ptr, ftr;
    ptr = a.begin();
    ftr = a.end();
    auto it = next(ptr, 2);  // starting from ptr it will point to the next 2nd element i.e excluding value pointed by ptr
    auto it1 = prev(ftr, 4); // starting from ftr it will point to the previous 4th element i.e including the value pointed by ftr
    cout << "The value Pointed by it is" << endl;
    cout << *it << endl;
    cout << "The value pointed by it1 is" << endl;
    cout << *it1 << endl;
    return 0;
}

/*
    Output:
    The value Pointed by it is
    3
    The value pointed by it1 is
    2
*/