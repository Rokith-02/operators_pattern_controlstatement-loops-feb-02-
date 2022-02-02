#include<stdio.h>
int main()
{
        int i,num,sum=0;
        for(i=0;i<10;i++)
        {
                printf("enter the number\n");
                scanf("%d",&num);
                if(num<0)
                continue;
                if(num==0)
                break;
                sum=sum+num;
        }
        printf("sum:%d\n",sum);
}
