// print the 1-100 odd number
#include<iostream>
using namespace std;

int main(){

    for(int i = 1; i <=100; i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }

    return 0;
}