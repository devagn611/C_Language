#include <stdio.h>

int getmax();
int getmin();
int main()
{
    int a, b, c,max,min;
    printf("\n Name - Maniya Devagn");
    printf("\n enrollment number - 210210116004");
    printf("\n");
    printf("enter a number 1-");
    scanf(" %d", &a);
    printf("enter a number 2-");
    scanf(" %d", &b);
    max=getmax(a, b);
    min=getmin(a, b);
    printf("max=%d\n",max);
    printf("min=%d",min);
    return 0;
}

int getmax(int a,int b){
    return (a>b) ? a : b;
    }
int getmin(int a,int b){
    return (a>b) ? b : a;
}
