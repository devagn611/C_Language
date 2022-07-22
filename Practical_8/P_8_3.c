#include<stdio.h>

int fact(int);

int main()
{
    int n,ans;
    printf("\n Name - Maniya Devagn");
    printf("\n Enrollment number - 210210116004");
    printf("\n");
    printf("Enter the number:-");
    scanf("%d",&n);
    ans=fact(n);
    printf("factorial upto given num is:- %d",ans);
    return 0;
}

int fact(int n)
{
    if(n==0)
    {
        return 1;
        
    }
    if(n==1)
    {
        return 1;
    }
    else
    {
        return (n*fact(n-1));
    }
}