#include <iostream>
using namespace std;
int main() {
    int a = 5;

    // declare pointer variable
    int* b;
    b = &a;
    cout << "a = " << a << endl;

    cout << "Address of a (&a) = " << &a << endl;
         
    cout << "b = " << b << endl;

    // print the content of the address b points to
    cout << "Content of the address pointed to by b (*b) = " << *b << endl;
    
    return 0;
}
