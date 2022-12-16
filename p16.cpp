#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "Yash";
    cout << "The name is " << name << endl;
    cout << "The length of name is " << name.length() << endl;
    cout << "The substring of name is " << name.substr(0, 2) << endl;

    return 0;
}