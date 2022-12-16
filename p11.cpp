#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int a, b;

    cout << "Enter first number " << endl;
    cin >> a;
    cout << "Enter second number " << endl;
    cin >> b;
    cout << "The function returned " << sum(a, b);
    return 0;
}