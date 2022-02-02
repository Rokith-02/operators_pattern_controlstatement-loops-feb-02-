#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
        int a;
        struct st *next;
}ST;
void add_begin(ST**);
void print(ST*);
int main()
{
        ST*hptr=0;
        char op;
        do{
                add_begin(&hptr);
                printf("do you want create another node(y/n)\n");
                scanf(" %c",&op);
        }while(op=='y'||op=='Y');
        print(hptr);
}
void add_begin(ST**ptr)
{
        ST*temp=(ST*)malloc(sizeof(ST));
        printf("enter the numbers\n");
        scanf("%d",&temp->a);
        temp->next=*ptr;
        *ptr=temp;
}
void print(ST*ptr)
{
        while(ptr!=0)
        {
                printf("%d \n",ptr->a);
                ptr=ptr->next;
        }
}
