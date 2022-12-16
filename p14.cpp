#include <iostream>
using namespace std;

int main()
{
    int arr_2D[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "The value at " << i << "," << j << " is " << arr_2D[i][j] << endl;
        }
    }
}