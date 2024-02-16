#include<iostream>
using namespace std;
int main(){
        //loops in cppp

        //1.for loop
        cout<<"1]This is for loop:\n";
        for(int i=0; i<=10; i++){
            cout<<"hello world\t"<<i<<endl;
        }

        //2.while loop
        cout<<"2]This is while loop:\n";
        int a=0;
        while(a<=10){
            cout<<"hi gogli..."<<a<<endl;
            a++;
        }

        //3.Do while loop
        cout<<"3]This is Do while loop:\n";
        int b=0;
        do{
            cout<<"i love coding..."<<b<<endl;
            b++;
        }
        while(b<=10);
    return 0;
}