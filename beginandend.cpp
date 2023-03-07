#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int>::iterator ptr;
    for (ptr = a.begin(); ptr < a.end(); ptr++)
    {
        cout << *ptr << endl;
    }
    return 0;
}

/*
    Output:
    1
    2
    3
    4
    5
*/