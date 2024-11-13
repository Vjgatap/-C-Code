#include<iostream>
using namespace std;

int main(){

    int userAge;
    cout<<"Enter a user age : ";
    cin>>userAge;

    if(userAge>=18){
        cout<<"user is eigable for voting"<<endl;
    }else{
        cout<<"user are not eligibale for voting"<<endl;
    }

    return 0;
}