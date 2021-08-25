#include <iostream>
using namespace std;

// pointer
int main()
{
    int n = 5;
    cout << &n << endl;

    int *ptr = &n;
    cout << ptr << endl;

    cout << *ptr << endl;
    return 0;
}