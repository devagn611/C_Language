#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,temp,*p1,*p2;
    p1=&a;
    p2=&b;
    printf("\n Name - Maniya Devagn");
    printf("\n enrollment number - 210210116004");
    printf("\n");
    printf("enter the value of a:-");
    scanf("%d",&a);
    printf("enter the value of b:-");
    scanf("%d",&b);
  
    
    temp=*p1;
    *p1=*p2;
    *p2=temp;

    printf("swap value:-\n");
    printf("a=%d \nb=%d",*p1,*p2);
    
    return 0;
}
