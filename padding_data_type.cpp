#include <iostream>
using namespace std;

class A {

//     char s;
//     int a;
//     double b;


    char c[100];
    int a;
};

int main() {
    A obj;
    
    // cout << sizeof(obj.a) << " " << sizeof(obj.b) << endl;
    cout << "Total size of object: " << sizeof(obj) << endl;

    return 0;
}
