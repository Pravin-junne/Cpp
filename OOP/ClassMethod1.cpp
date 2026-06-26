#include <iostream>

using namespace std;

//Define a Method Inside the Class
class MyClass {
    public:
    void myMethod() {
        cout << "Hello World!";
    }
};

int main() {
    MyClass myObj;
    myObj.myMethod();
    
    return 0;
}