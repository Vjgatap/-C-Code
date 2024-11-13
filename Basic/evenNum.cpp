// print all the even number form 1 to 100

#include<iostream>

using namespace std;

int main(){

    int n = 10;
    int sum = 0;

    for(int i = 0; i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<i<<" ";
            sum = sum + i;
        }
    }
    cout<<endl;

    cout<<"The sum of all even number is : "<<sum<<endl;

    return 0;
}