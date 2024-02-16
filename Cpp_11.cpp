#include<iostream>
using namespace std;
int main(){

    //sample array program
    /*
    int Friend[3];
    Friend[0] = 10;
    Friend[1] = 11;
    Friend[2] = 12;
    Friend[3] = 13;

    cout<<Friend[0]<<endl;
    cout<<Friend[1]<<endl;
    cout<<Friend[2]<<endl;
    cout<<Friend[3]<<endl;
    */
  
   int Marks[4]={10,20,30,40};
   for(int i=0; i<=3; i++){
    cout<<"The value of marks :"<<Marks[i]<<endl;
   }
    //pointers and arrays
   int* p =Marks;
   cout<<*p<<endl;
   cout<<*(p+1)<<endl;
   cout<<*(p+2)<<endl;
   cout<<*(p+3)<<endl;
    return 0;
}