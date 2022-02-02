#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
        char a;
        struct st *next;
}ST;
void add_begin(ST**);
void print(ST*);
int main()
{
        ST*hptr=0;
        int i=0;
        char op;
        printf("enter the vowels(a/e/i/o/u)\n");
        do{
                add_begin(&hptr);
                ++i;
        }while(i<5);
        print(hptr);
        return 0;
}
void add_begin(ST**ptr)
{
        ST*temp=(ST*)malloc(sizeof(ST));
        scanf(" %c",&temp->a);
        if(*ptr==NULL)
        {
        temp->next=*ptr;
        *ptr=temp;
        }
        else
        {
                ST*last=*ptr;
                while(last->next!=0)
                last=last->next;

                temp->next=last->next;
                last->next=temp;
        }
}
void print(ST*ptr)
{
        ST*temp=ptr;
        do{
                printf("%c \n",ptr->a);
                ptr=ptr->next;
        }while(temp!=ptr);
        printf("rokith\n");
}
