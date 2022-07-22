#include <stdio.h>

int main()
{
    printf("My name is Maniya Devagn. \nMy Enrolment Number is 210210116004.\n");
    long int day,month;
    float year;
    printf("Enter days: ");
    scanf("%d",&day);
    month=day/30;
    printf("Month:%d\n",month);
    year=month/12.0;
    printf("Year:%.2f\n",year);
    return 0;
}
