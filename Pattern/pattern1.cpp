#include<iostream>
using namespace std;

int main(){

    int row, column;
    cout<<"Enter row : ";
    cin>>row;
    cout<<"Enter column : ";
    cin>>column;

    for(auto i = 0; i < row; i++){
        for(auto j = 0; j < column; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}