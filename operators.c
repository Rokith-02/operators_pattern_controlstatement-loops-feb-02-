#include<stdio.h>
int main()
{
	//printf("%d\n",1==5==5);((1==5)==5);((0)==5);0
	
	//int i =0;
        //printf("%d %d",i,i++);//evaluating from right to left;i is post increamented i value is 0;after that i value is 1;output is 1 0;

	//int x=5;
 	//printf("%d %d %d\n",x++,x++,x++);evaluating from left to right;output 7 6 5;

        //int x=2;
        //printf("%d",++x++);//compiletime error-lvalue error;
        //printf("%d\n",x++);

	//int k=1;
        //printf("%d==1 is ""%s\n",k,k==1?"TRUE":"FALSE");value of %d %f are substituted ;k==1?true:false evaluates to true when k=1;output 1==1 is true.

	//int i=5;
        //i=i++ - --i + ++i; i value will be 6
	//printf("%d",i);

	//int a=7;
        //a+=a+=a-=6;//a=7-6,a=1+1,a=2+2 returns a=4;assignment operator are least precedence
        //printf("%d\n",a);

        //int x=10,y=5,p,q;
        //p=x>9;//true ;return 1
        //q=p||(x=5,y=10);//return 1 p is non zero value so secound one not evaluated
        //printf("%d %d %d\n",q,x,y);output 1 10 5

        //int x=2,y=1;
        //y+=x<<=2;//<< operator will leftshift the value by x=x<<2;y=y+x
        //printf("%d %d\n",x,y);8 9

        //int x=2,y=4,z;
        //z=y++*x++|y--;evaluating from left to right
        //printf("%d \n",y++*x++|y--);//4*2|5;8|5;13

        //int a=5,b=6,c=7,d;
        //d=a&=b&=c&&a;// evaluating from right to left c&&a then perform 1 & 6 then perform 0&5 result is 0
        //printf("%d\n",d);//returns 0

        //int i=10;
        //i=((10<10)?((10>=10)?((10<=10)?1:2):3):4); 
        //printf("%d\n",i);// 4 will be the output

        //int a=10,b=20;
        //a=(a>5||b=6?40:50);
        //printf("%d\n",a);//error ; if b==6 we will get output as 40. 
	
	//printf("%x\n",-1>>4);//ffffffff
        //printf("%x\n",-1<<4);//fffffff0

	//int x=7;
        //x=(x<<=x%2);//x=x<<x%2   here 7%2=1 so x=x<<1 is x=14
        //printf("%d\n",x);

	//int a=2,b=5,c=1;
        //printf("%d\n",(((b>=a)>=c?1:0));//5>=2>=1 it is true so 1 will displayed.

	//int a=5;
        //a=a-~a+1;//~a returns -6 after a-(-6)=a+6 resulting 11+1 and finally 12 will displayed.
        //printf("%d\n",a);

	/*int a,b,c,x;//In question a,b,c,x are not initialized.
	a=b=c=1;
        x=--a||++b*(3-1)/2&&b*(--c/3);
        printf("%d\n",x);//this will return 0*/

      /*int a=10;
        int b = -5;
        int c = 2.5;
        printf("%d %d",sizeof(++b*c)+sizeof(a),b);*/any operation inside sizeof operator will not be evaluated 8,-5 

      /*int i=5;
        i=i++ - i;//5-6 output is:-1
        printf("%d",i);*/
}
