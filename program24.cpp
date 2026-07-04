//Write C++ program to Count total Duplicat elements in an array

#include <iostream>

using namespace std;

int main()
{
    int arr[100];
    int i,j,n, count = 0;

    // Reading size of the array
    cout<<"Enter the elements in the array: ";

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    // Find all duplicate elements in the array
    
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            // If duplicate element is found then ioncrement by 1
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    cout<<"\n Total number of duplicate elements in the array: "<<count;
    return 0;
}