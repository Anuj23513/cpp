/*During early binding, the compiler directly associates an address to a function call.
It replaces the call with a machine language instruction that jumps to the address of the function.
Early binding occurs at compile time.
By default, early binding happens in C++. */

// When compiler knows about which function will call it associates with the function early thats why this is called early binding.



#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "In Base" << endl;
    }
};

int main() {
    Base obj;
    obj.show(); // Early binding
    return 0;
}
