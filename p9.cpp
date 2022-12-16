#include <iostream>
using namespace std;

int main()
{
    int index = 0;

    do
    {
        cout << "we are at index number" << index << endl;
        index = index + 1;
    } while (index < 10);

    return 0;
}