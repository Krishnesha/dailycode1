// C++ Program to concatenate two strings

#include <iostream>
#include <string>

using namespace std;

int main(){
    char s1[50], s2[50], result[100];
   
    cout<<"Enter the string s1:";
    cin.getlines(s1, 50); //reading first string from user

    cout<<"Enter the string s2:";
    cin.getlines(s2, 50); //reading second string from user

    strcat (s1 , s2);// strcat is use to coneatnates two string

    cout<<"string obtained on connatenation is:"<<s1 << endl;

    return 0;
}