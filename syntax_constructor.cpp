#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "Constructor called inside the class!" << endl;
    }
};
int main() {
    cout << "Inside main()" << endl;
    Test t1;        
    return 0;
}
