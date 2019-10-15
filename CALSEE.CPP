#include<stdio.h>
#include<conio.h>
void add();
void sub();
void multi();
void div();
void mod();
void prime();
void div_check();
void fact();
void square();
void squarerut();
void instructions();
void main()
{
int switch_ctrl,inst;
char name[15];
clrscr();
printf("Hi I am Calsee!!!\nWhat's your name_");
gets(name);
printf("Hi %s\n",name);
printf("press any key to continue\n");
getch();
begin:
clrscr();
printf(" %s what would you like to do\n",name);
printf("0.Exit  1.Add  2.Subtract  3.Multiply  4.Divide  5.Remainder \n");
printf("6.Square  7.Square Root  8.  9. \n");
printf("10.Prime Number check  11.Divisibility check  12.Factorial of a number \n");
scanf("%d",&k);
switch (switch_ctrl)
{
case 1:
       add();
       break;
case 2:
       sub();
       break;
case 3:
       multi();
       break;
case 4:
       div();
       break;
case 5:
       mod();
       break;
case 6:
       square();
       break;
case 7:
       squarerut();
       break;
case 8:
       ;
       break;
case 9:
       ;
case 10:
       prime();
       break;
case 11:
       div_check();
       break;
case 12:
       fact();
       break;
case 13:
       ;
       break;
case 0:
       break;
default:
	printf("invalid value entered \n");
	printf("press 1 to view instructions \npress 0 to continue\n");
	scanf("%d",&inst);
	switch (inst)
	{
	case 0:
	       goto begin;
	case 1:
	       instructions();
	       break;
	}
}
if(k>0)
goto begin;

}

void add()
{
int x,y,z;
gotoxy(35,8);
printf("Addition\n");
printf("enter two numbers\n");
scanf("%d%d",&x,&y);
z=x+y;
printf("%d + %d = %d",x,y,z);
getch();
}

void sub()
{
int x,y,z;
gotoxy(35,8);
printf("Subtraction\n");
printf("enter two numbers\n");
scanf("%d%d",&x,&y);
z=x-y;
printf("%d - %d = %d",x,y,z);
getch();
}
void multi()
{
int x,y,z;
gotoxy(35,8);
printf("Multiplizcation\n");
printf("enter two numbers\n");
scanf("%d%d",&x,&y);
z=x*y;
printf("%d * %d = %d",x,y,z);
getch();
}
void div()
{
int x,y,z;
gotoxy(35,8);
printf("Division\n");
printf("enter two numbers\n");
scanf("%d%d",&x,&y);
z=x/y;
printf("%d / %d = %d",x,y,z);
getch();
}
void mod()
{
int x,y,z;
char a='%';
gotoxy(35,8);
printf("Remainder\n");
printf("enter two numbers\n");
scanf("%d%d",&x,&y);
z=x%y;
printf("%d %c %d = %d",x,a,y,z);
getch();
}
void prime()
{
gotoxy(20,8);
printf("check if the number is a prime number\n");
getch();
}
void div_check()
{
gotoxy(20,8);
printf("check the divisiblity of a number\n");
getch();
}
void fact()
{
int i,x,fact=1;
gotoxy(35,8);
printf("Factorial\n");
getch();
printf("enter a number\n");
scanf("%d",&x);
for(i=1;i<=x;i++)
fact=fact*i;
printf("%d factorial= %d",x,fact);
getch();
}

void square()
{

}

void squarerut()
{

}

void instructions()
{
int c=4;
clrscr();
printf("%c inst 1\n",c);
printf("%c inst 2\n",c);
printf("%c inst 3\n",c);
printf("%c inst 4\n",c);
printf("%c inst 5\n",c);
printf("%c inst 6\n",c);
printf("press any key to continue\n");
getch();
}
