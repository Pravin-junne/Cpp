#include <iostream>

using namespace std;

class MyClass {
    public:
    MyClass() {
        cout << "Object is created";
    }
};

int main() {
    MyClass obj; //create an object of MyClass (This will call the constructor)

    return 0;
}