#include <stdio.h>
#include <conio.h>

int main()
{
    printf("My name is Maniya Devagn. \nMy Enrolment Number is 210210116004.\n");
    int a, b, choose, add, sub, mul, div, mod;
    printf("\n 1.add \n 2.sub \n 3.mul \n 4.div \n 5.mod \n");
    printf("Enter Choice:-");
    scanf("%d", &choose);
    printf("Enter two Number :-");
    scanf("%d%d", &a, &b);
    switch (choose)
    {
    case 1:
        add = a + b;
        printf("addition of %d & %d :%d",a,b,add);
        break;
    case 2:
        sub = a - b;
        printf("subtraction of %d & %d :%d",a,b,sub);
        break;
    case 3:
        mul = a * b;
        printf("multiplication of %d & %d :%d",a,b,mul);
        break;
    case 4:
        div = a / b;
        printf("ans:%d", div);
        break;
    case 5:
        mod = a % b;
        printf("Reminder:%d", mod);
        break;
    default:
        printf("Please make correct choice.");
        break;
    }
    return 0;
}