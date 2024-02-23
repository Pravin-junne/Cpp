#include<iostream>
using namespace std;
//function defination and declaration
inline int mult(int a, int b){
    return a*b;
}
int main(){
        int a,b;
        cout<<"Enter the first number:"<<endl;
        cin>>a;
        cout<<"Enter the second number:"<<endl;
        cin>>b;
        cout<<"Product of numbers: "<<mult(a,b); //function call
    return 0; 
}