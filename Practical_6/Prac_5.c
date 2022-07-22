#include <stdio.h>

int main()
{
    int i, n, j, c=0;
    printf("\n Name - Maniya Devagn");
    printf("\n enrollment number - 210210116004");
    printf("\nenter the size of an array:-");
    scanf("%d", &n);
    int a[n];
     printf("enter the element:-");
    for (i = 0; i < n; i++)
    {
       
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
       for(j=i+1;j<n;j++)
{
    if(a[i]>a[j])
    {
        c=a[i];
        a[i]=a[j];
        a[j]=c;
    }
}    
   
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}