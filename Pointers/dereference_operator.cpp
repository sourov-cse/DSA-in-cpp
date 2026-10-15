#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int* ptr = &a; 
    int** parPtr = &ptr;

    cout << *(parPtr) << endl;
    cout << ptr << endl;
    
    cout << *(&a) << endl; // address ----> a ; a ----> value
    cout << *(ptr) << endl; // value ----> ptr ; ptr ----> value 'a'
    
    cout << **(parPtr) << endl;

    return 0;
}