#include <stdio.h>

int main()
{
    printf("Name:- Maniya Devagn\n");
    printf("Enrolment no.:-210210116004\n");
    int a[1000], i, sum = 0,max, min, size;
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
        sum += a[i];
    }
    printf("The sum of arrays is :- %d", sum);

    printf("\n");

    avg = (sum) / (size);
    printf("The average of arrays is :- %f", avg);

    printf("\n");

    min = max = a[0];
    for (i = 1; i < size; i++)
    {
        if (min > a[i]){
            min = a[i];
        }
        if (max < a[i]){
            max = a[i];
        }
    }
    printf("min: %d  &  max: %d\n",min,max);

    return 0;
}
