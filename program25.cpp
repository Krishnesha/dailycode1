#include<iostream>
using namespace std;
double cube(double num);
int main()
{
    int num;
    double c;

    //inputting number from user

    cout<<"Enter a number: "<<endl;
    cin>>num;

    c = cude(num);

    cout<<"Cude of "<<num<<"is"<<c;
    return0;

}
// Function to find cude of any number;

double cude (double num)
{
    return(num*num*num);
}