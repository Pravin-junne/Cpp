#include <iostream>

using namespace std;

class Car {
    public:
    string brand;
    string model;
    int year;

    //constructor with parameters
    Car(string x, string y, int z) {
        brand = x;
        model = y;
        year = z;
    }
};

int main() {
    //create a Car objects and call the constructor with different values
    Car carObj1("BMW", "X5", 1999);

      // Print values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";

  return 0;
}