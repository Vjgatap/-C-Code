#include <iostream>

using namespace std;

int main()
{

    int stars;
    cout << "Enter No of stars : ";
    cin >> stars;

    for (int i = 1; i <= stars; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j <<" ";
        }
        cout << endl;
    }

    return 0;
}