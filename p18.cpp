#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    int salary;

    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }

    void printDetails()
    {
        cout << "The name of first employee is " << this->name << " and his salary is " << this->salary << "$" << endl;
    }

    void getsecretPassword()
    {
        cout << "The sedret password of imployee is " << this->secretPassword << endl;
    }

private:
    int secretPassword;
};

int main()
{
    Employee ya("Yash constructor", 5000, 1414);
    // ya.name = "Yash";
    // ya.salary = 10000;
    // cout<<"The name of first employee is "<<ya.name<<" and his salary is "<<ya.salary<<"$"<<endl;
    // cout<<ya.secretPassword;                     not run (private)

    ya.printDetails();
    ya.getsecretPassword();

    return 0;
}