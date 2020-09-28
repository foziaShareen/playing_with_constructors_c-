#include <iostream>
using namespace std;

//point#3 if the type of the argument does not match the formal parameters of any constructor
// c++ uses type conversion and best match is used.
class myClass{
    private:
    int a;
    int b;
    float f;
    public:
    myClass();
    myClass(int x,int y,float z)
    {
a=x;
b=y;
f=z;
    }

void display()
{
cout<<a<<endl<<b<<endl<<f<<endl;
}
};
int main()
{
myClass mc_one(2,4,5);//note we have passed int rather than float but it is accepted.
mc_one.display();
}