/*mingw de c kodunu calistirma amacli kodu calistirma*/
#include<stdio.h>
int main(void)
{
/*variables*/
int number, digit1, digit2;
/*get input from user*/
printf("Enter a two digit number.");
scanf("%d",&number);
/*swap digits*/
digit1=number%10;
digit2=number/10;
number=digit1*10+digit2;
/*output the result*/
printf("The result is: %d\n",number);
return 0;
}
