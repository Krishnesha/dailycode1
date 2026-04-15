#include<iostream>
using namespace std;
template <class T>
class Number
{
private:
T num;

public:
Number(T n) : num(n)
{

}

T getNum()
{
return num;
}
};

int main()
{
Number <int> n1(7);
Number <double> n2(7.7);
cout << "int Number = " << n1.getNum() << endl;
cout << "double Number = " << n2.getNum() << endl;
return 0;
}