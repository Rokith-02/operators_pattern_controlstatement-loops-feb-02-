#include<stdio.h>
int main()
{
        double r,b;char op;
        printf("enter the two number\n");
        scanf("%lf %lf",&r,&b);
        printf("enter add(a)orsub(s)--(a/s)\n");
        scanf(" %c",&op);
        switch(op)
        {
                case 'a':printf("%.2lf\n",r+b);break;
                case 's':printf("%.2lf\n",r-b);break;
        }

}
