#include <iostream>
using namespace std;

int main()
{

    float a;
    float b;
    cout << "Enter value of a : ";
    cin >> a;
    cout << "Enter value of b : ";
    cin >> b;
    float c;

    try
    {
        if (b == 0)
        {
            throw b;
        }
        c = a / b;
        cout << "Result of a/b is : " << c;
    }

    catch (float x)
    {
        cout << "The divisor can't be zero !!" << endl;
        exit(-1);
    }
}
