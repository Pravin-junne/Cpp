#include<iostream>
using namespace std;
int c = 50;
int main(){
    int c=5;
   
    cout<<"The value of c in local scope:"<<c<<endl;
    cout<<"The value of c in global scope:"<<::c;   //***<<::  --> is used to assign gloable scope

    return 0;

}