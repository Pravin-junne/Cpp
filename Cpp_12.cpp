#include<iostream>
#include<string>
using namespace std;

struct student{
    int rollNo;
     string name; //sturct
};

union Teacher{
    int roll_No; //union
    
};

int main(){
    //data in sturct
    struct student M1;
    M1.name = "Pravin Junne";
    M1.rollNo = 01;

    //out put of sturct
    cout<<M1.name<<endl;
    cout<<M1.rollNo<<endl<<endl;

    //union
        union Teacher T1;
        T1.roll_No = 01;
       
        cout<<T1.roll_No;


    return 0;
}