#include<iostream>
//There are two types of header files:
//1.System header files: It comes with the compiler
//2.User defined header iles: It is written by the programmer
using namespace std;

int main(){
    int a=10, b=20;
    cout<<"operaters in C++:"<<endl;
    cout<<"1]Arithmetic Operaters"<<endl;
    //Arithmetic operatersin C++
    cout<<"The value of a + b:-"<<a+b<<endl;    //Add
    cout<<"The value of a - b:-"<<a-b<<endl;    //sub
    cout<<"The value of a * b:-"<<a*b<<endl;    //mult..
    cout<<"The value of a / b:-"<<a/b<<endl;    //divi..
    cout<<"The value of a % b:-"<<a%b<<endl;    //mod
    cout<<"The value of ++a:-"<<a++<<endl;      
    cout<<"The value of a--:-"<<a--<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    //Assigment Operaters in C++ --> Used to assign values
    //int a = 10;
    //char b ='b';
    cout<<"2]Comparison Operaters"<<endl;
    //comparison Operaters in C++
    cout<<"The value of a==b:"<<(a==b)<<endl;
    cout<<"The value of a!=b:"<<(a!=b)<<endl;
    cout<<"The value of a>=b:"<<(a>=b)<<endl;
    cout<<"The value of a<=b:"<<(a<=b)<<endl;
    cout<<"The value of a>b:"<<(a>b)<<endl;
    cout<<"The value of a<b:"<<(a<b)<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    //Logical operaters in C++
    cout<<"3]Logical Operaters"<<endl;
    cout<<"The value of logical And operater (a>=b) && (a>b) is:"<<((a>=b) && (a>b))<<endl;
    cout<<"The value of logical Or operater (a<=b) || (a>=b) is:"<<((a<=b) || (a>=b))<<endl;
    cout<<"The value of logical Not operater !(a<b) is:"<< (!(a<b))<<endl;

    return 0;
}