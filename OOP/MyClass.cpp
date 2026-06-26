#include <iostream>
#include <string>

using namespace std;

class MyClass {
    public:
    int myNum;
    string myString;
};

int main() {

    MyClass myObj; //create an object of MyClass
    myObj.myNum = 15;
    myObj.myString = "Pravin";

    //print values
    cout << myObj.myNum << "\n";
    cout << myObj.myString;
    
    return 0;
}