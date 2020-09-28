#include<iostream>
using namespace std;
class constructor1
{
private:
    int age;
public:
constructor1();
    constructor1(int);//parameterized constructor 
    
};

constructor1::constructor1(int x)
{
    age=x;
    cout<<age;
}




int main()
{
    constructor1 cons(3);

}