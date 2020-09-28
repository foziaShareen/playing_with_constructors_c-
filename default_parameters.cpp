#include<iostream>
using namespace std;
//we can make default  parameter constructor as below
class person
{
    private:
    int score;
    int age;
    public:
    person();// constructor
    person(int =0,int=0);//default parameters

};
person::person(int x,int y)
{
    score=x;
    cout<<score;
    cout<<age;
}
int main()
{ 
    person pr1(2);
    person pr2(3,5);
    
}