#include <iostream>

using namespace std;

//efine a Method Outside the Class
class MyClass {
    public:
    void myMethod(); //method declaration

};

//method definition outside the class
void MyClass::myMethod() {
    cout << "Hello World!";
}

int main() {
    MyClass obj;
    obj.myMethod();

    return 0;
}