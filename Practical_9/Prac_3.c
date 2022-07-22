#include <stdio.h>
int swap(int *a, int *b);
int main()
{
    printf("\n Name - Maniya Devagn");
    printf("\n enrollment number - 210210116004");
    printf("\n");
    int a = 10, b = 12;
    swap(&a, &b);
    printf("the value of a : %d and the value of b : %d", a, b);
    return 0;
}

int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

