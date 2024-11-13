//check the given number is +tive, -tive or zero

#include"iostream"
using namespace std;

int main(){

    int number;
    cout<<"Enter a number : ";
    cin>>number;

    if(number>=0){
        cout<<number<<" is postive"<<endl;
    }else if(number == 0){
        cout<<number<<" is zero"<<endl;
    }else{
        cout<<number<<" is negitive"<<endl;
    }

    return 0;
}