#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int b = 20;

    cout<<"The value of a is before swapping is : "<<a<<endl;
    cout<<"The value of b is before swapping is : "<<b<<endl;

    int temp = a;
    a = b;
    b = temp;
    
    cout<<"The value of a is After swapping is : "<<a<<endl;
    cout<<"The value of b is After swapping is : "<<b<<endl;



}
