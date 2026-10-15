#include <iostream>
using namespace std;

/* 
void changeA (int a){   // pass by valu
    a = 20;
}
int main(){
    int a = 10;

    changeA (a);
    cout << "Inside main function : " << a << endl; //10

*/   

// pass by reference using pointers
void changeA (int* ptr){   
    *ptr = 20;
}
int main(){
    int a = 10;

    changeA (&a);
    cout << "Inside main function : " << a << endl; //20
  
    return 0;
}