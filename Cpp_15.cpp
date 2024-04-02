//function overloading..
#include<iostream>
using namespace std;

int sum(int a, int b, int c){//function 1
    cout<<"using fun 1"<<endl;
    return a+b+c;
}

int sum(int a, int b){//function 2
    cout<<"using fun 2"<<endl;
    return a+b;
}
int main(){
    cout<<"sum of 3 and 4 is:"<<sum(3,4);
    return 0;
}