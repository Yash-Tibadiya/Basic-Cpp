#include <iostream>
using namespace std;

int main()
{
    int a = 69;
    int* ptra;
    ptra = &a;

    cout<<"Value of a that poit by ptra "<<*ptra<<endl;
    cout<<"Value of a that poit by ptra "<<a<<endl;

    cout<<"Adress of a is "<<ptra<<endl;
    cout<<"Adress of a is "<<&a<<endl;    

    return 0;
}