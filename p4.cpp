# include <iostream>
using namespace std;

int main()
{
    float const score = 59.69;  //score is constent
    cout<<"The score is "<<score<<endl;

    score = 99.99;     //Eror
    cout<<"the score is "<<score;

    return 0;
}