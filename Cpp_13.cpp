#include<iostream>
#include<string>
using namespace std;

//fun for sum
int sum(int a, int b){
    int c = a+b;
    return c;
}

void p(void){
    cout<<"Good morning\n";
}

int main(){
    //Functions
p();
int num1,num2;
cout<<"Enter the first number:";
cin>>num1;
cout<<"Enter the second number:";
cin>>num2;

cout<<"The sum of number is:"<<sum(num1,num2);
    return 0;
}