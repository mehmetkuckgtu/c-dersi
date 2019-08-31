#include<stdio.h>

void separate
(double num, /* input - value to be split */
char *signp, /* output - sign of num */
int *wholep, /* output - whole number magnitude of num */
double *fracp); /* output - fractional part of num */
 
int main()
{
	
	char signp;/* output - sign of num */
	int wholep; /* output - whole number magnitude of num */
 	double fracp,num;
 	printf("degeri giriniz\n");
 	scanf("%lf",&num);
	separate(num,&signp,&wholep,&fracp);
	printf("%c\n",signp);
	printf("%d\n",wholep);
	printf("%f\n",fracp);
				
	return (0);
}

 /*
 * Separates fonksiyonu girilen num deðerinin artý eksi oldugunu 
 * tam sayý deðeri ve tam sayý olmayan kýsmýný göstermektedir.
 */

 void separate(double num, /* input - value to be split */
 char *signp, /* output - sign of num */
 int *wholep, /* output - whole number magnitude of num */
 double *fracp) /* output - fractional part of num */
 {
	double magnitude; /* local variable - magnitude of num */
	
	/* Determines sign of num */
	if (num < 0)
	*signp = '-';
	else if (num == 0)
	*signp = ' ';
	else
	*signp = '+';
	
	/* Finds magnitude of num (its absolute value) and
	separates it into whole and fractional parts */
	magnitude = fabs(num);
	*wholep =floor(magnitude);
	*fracp = magnitude - *wholep;
 }
