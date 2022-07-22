#include <stdio.h>

int main()
{
    printf("Name:- Maniya Devagn\n");
    printf("Enrolment no.:-210210116004\n");
    int a[1000], i, sum = 0, max, min, size;
    float avg;
    printf("Enter the size of the array:-");
    scanf("%d", &size);
    printf("Enter %d values to the array:-\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            sum += a[i];
        }
        else
        {
            continue;
        }
    }
    printf("The sum of arrays is :- %d", sum);

    printf("\n");
    max = a[0];
    for (i = 0; i < size; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("max:- %d", max);
    return 0;
}