#include<iostream>
using namespace std;
//Important points:
// 1.constructor has no datatype and constructor's name is the same 
// as class name.
//2.when object is created constructor is called.
class myClass
{

public:
myClass()
{
cout<<"I am constructor"<<endl;
}
};
int main()
{
myClass mc1;//object mc1 is created
}