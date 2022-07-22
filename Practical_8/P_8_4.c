#include<stdio.h>

int sum(int);

int main()
{
    int n,ans;
    printf("\n Name - Maniya Devagn");
    printf("\n enrollment number - 210210116004");
    printf("\n");
    printf("enter a number:-");
    scanf("%d",&n);
    ans=sum(n);
    printf("sum upto given number is:- %d",ans);
    return 0;
}
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return (n+sum(n-1));
    }
}