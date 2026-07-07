// C++ Program to find Length of thr String by Passing/Character

#include<iostream>
#include<math.h>

using namespace std;

//Function declaration
int stringLength(char *);
int main()
{
    char text [100];
    int length;

    cout<<"Enter text (max = 100 charactere)";
    cin>>text;

    length = stringLength(text);

    cout<<"Input text is: "<<text<<endl;
    cout<<"Length is: "<<length<<endl;

    return 0;

}

int stringLength(char *str)
{
    int len = 0;

    //calculating length of string

    for(len = 0; str[len] != '\0'; len++)

    //returning Len

    return len;
}


