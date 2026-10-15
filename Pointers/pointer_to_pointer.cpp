#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int* ptr = &a;  // store 'a' address
    int** parPtr = &ptr; // store ptr address

    cout << &ptr << endl; // print ptr address
    cout << parPtr << endl; // 

    return 0;
}