#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;
    int a = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << a;
            int b = a + 64;
            char c = (char)b; //type casting
            a++;
        }
        cout << endl;
    }
    return 0;
}