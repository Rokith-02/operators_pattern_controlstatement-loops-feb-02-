#include<stdio.h>
int main()
{
        int i;
        printf("even numbers are:\n");
        for(i=1;i<=100;i++)
        {
                if(i%2==0)
                printf("%d ",i);
        }
        printf("\n");
        printf("odd numbers are:\n");
        for(i=1;i<=100;i++)
        {
                if(i%2==0)
                continue;
                else
                printf("%d ",i);
        }
}
//printing odd and even number b/w 1-100
