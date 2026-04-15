#include<iostream>
using namespace std;
template<class T , class U>
void multiply(T p , U q)
{
cout<<"Multiplication="<<p*q<<endl;
}
int main()
{
int a, b;
float x, y;
cout<<"Enter the value of a and b"<<endl;
cin>>a>>b;
cout<<"Enter the value of x and y"<<endl;
cin>>x>>y;
multiply(a,b); // Multiply two integer type data
multiply(x,y); // Multiply two float type data
multiply(a,x); // Multiply a float and integer type data
return 0;
}