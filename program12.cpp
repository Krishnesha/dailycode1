#include <iostream>
using namespace std;
template <typename T>
T add(T num1, T num2 )
{
return (num1 + num2);
}
int main()
{
int result1;
double result2;
float result3;
// calling with int parameters
result1 = add<int>(2, 3);
cout << "Result1=" <<result1
<< endl;

// calling with double parameters
result2 = add<double>(2.2, 3.3);
cout << "Result2=" <<result2
<< endl;

// calling with float parameters
result3= add<float>(6.777, 88.9);
cout << "Result3=" <<result3
<< endl;

return 0;
}