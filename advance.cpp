#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int>::iterator ptr;
    ptr = a.begin();
    // advance() arguements are ptr and second arguement is step i.e it will advance to the required steps
    advance(ptr, 3);
    cout << "The value ptr pointing to will be:" << endl;
    cout << *ptr << endl;
}

/*
    Output:
    The value ptr pointing to will be:
    4
*/