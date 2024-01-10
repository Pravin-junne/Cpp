//Cpp control structures
#include<iostream>
using namespace std;
int main(){
        int age;
        cout<<"Enter your Age:-"<<endl;
        cin>>age;
        //if else lader
        if(age>18){
            cout<<"you can come to the party";
        }
        else if(age==18){
            cout<<"you can come to the party with kid pass";
        }
        else{
            cout<<"Sorry.. you are not eligible";
        }
    return 0;
}