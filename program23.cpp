#include<iostream>
#define MAX_SIZE 100
using namespace std;
int main()
{
    int arr[MAX_SIZE];
    int i, num, evennum, oddnum;
    
    // Reads size and elements in array

    cout << "Enter size of array: ";
    cin >> num;

    cout<<"Enter" <<num <<"Elements in array: ";

    for(i=0; i<num; i++)
    {
        cin>>arr[i];
    }

    evennum=0;
    oddnum=0;

    for(i=0; i<num; i++)
    {
        if(arr[i]%2==0)
        {
            evennum++;
        }
        else
        {
            oddnum++;
        }
    }

    cout<<"Total Even Numbers: "<<evennum<<endl;
    cout<<"Total Odd Numbers: "<<oddnum<<endl;

    return 0;
}
