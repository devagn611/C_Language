#include<stdio.h>

int main()
{
    int i,n,max_odd=0,max_even=0;
    printf("\n Name - Maniya Devagn");
    printf("\n enrollment number - 210210116004");
    printf("\nenter the size of an array:-");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("enter the element ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    { if(a[i]%2==0)
        {
           
            if(a[i]>max_even)
            {
           max_even=a[i];
            }
        }
        else
        {
            if(a[i]>max_odd)
            {
           max_odd=a[i];
            }

        }
    }
         printf("maxodd=%d\n",max_odd);
       printf("maxeven=%d\n",max_even);
    return 0;
}
