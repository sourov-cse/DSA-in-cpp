#include <iostream>
using namespace std;
    
// pass by reference using alias
void changeA (int &b){   // & is not addrass symbole; & is a alias
   b = 20;
}
int main(){
    int a = 10;

    changeA (a);
    cout << "Inside main function : " << a << endl; //20
    return 0;
}