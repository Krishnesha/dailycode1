#include <stdio.h>
// Nested Structure

struct Sal
{
    int acc_no;
    int amount;
};

// Outer Structure
struct Emp
{
    char name_emp[50];
    int age;
    int date_of_join;
    struct Sal S;
};

int main()
{
    struct Emp E1;

    printf("Enter the emp name");
    scanf("%s", E1.name_emp);

    printf("Enter the date of join");
    scanf("%d", &E1.date_of_join);

    printf("Enter the acc details of emp");
    scanf("%d", &E1.S.acc_no);

    printf("The name of Emp is %s", E1.name_emp);
    printf("The acc no %d", E1.S.acc_no);

return 0;
}