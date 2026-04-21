#include <iostream>
using namespace std;
int main () {

vector<int> vec;
vec.push_back(0);
vec.push_back(1);
// access the third element, which doesn't exist
try
{

vec.at(2);

}
catch (exception)
{ cout<<"Exception I caught"<<endl;}
catch (exception& ex)
{

cout << "Exception occurred!" << endl;

}
return 0;
 }

