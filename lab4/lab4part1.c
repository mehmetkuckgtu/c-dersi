/*
kodu oluþturan: Mehmet KUCUK
Kodlara pek açýklama yapmadým. pdf te istenilenleri yaptým.
gerek gormedim pdfte yazýyor zaten ne yaptigi.
*/

#include<stdio.h>
//part 1
void printTerm(int coef,int deg,char x);
//part2
double evalTerm(int coef , int deg, int var_value);
//part3
int evalPrintPolynomial( int varValue , FILE* file);
//part4
void derTerm(int coef , int deg , char x);
//part5
void derTermUntilCons(int coef , int deg , char x);
void part5ForChar(int a,char x);//charýn girilecek dongusayisi ve ekrana basilmasi
int main()
{
	double part2;
	//part1
	printTerm(4,5,'F');
	//part2
	part2=evalTerm(8,6,4);
	printf("part2return=%.1f",part2);
	//part3
	FILE *file;
	file=fopen("part3.txt","r");
	int part3Value,part3Return;
	printf("\npart3Value=");
	scanf("%d",&part3Value);
	part3Return=evalPrintPolynomial(part3Value ,file);
	printf("part3Return=%d",part3Return);
	fclose(file);
	//part4
	derTerm(8,9,'X');
	//part5
	derTermUntilCons(8,9,'X');
	return 0;
}
//part1
void printTerm(int coef,int deg,char x)
{
	printf("part1\n");
	printf("%d",coef);
	int i;
	for(i=0;i<deg;i++)
	{
		printf("*%c",x);
	} 
}
//part2
double evalTerm(int coef , int deg, int var_value)
{
	printf("\npart2\n");
	int i,sum=1;
	for(i=0;i<deg;i++)
	{
		sum*=var_value;
	}	
	sum=sum*coef;
	return sum;
}
//part3
int evalPrintPolynomial(int varValue , FILE* file)
{
	printf("part3\n");
	int coefOnes,degOnes,coefTwos,degTwos,coefThrees,degThrees,sumOnes,sumTwos,sumThrees,sum;
	fscanf(file,"%d %d\n%d %d\n%d %d",&coefOnes,&degOnes,&coefTwos,&degTwos,&coefThrees,&degThrees);
	sumOnes=1;sumTwos=1;sumThrees=1;sum=0;
	int i;
	for(i=0;i<degOnes;i++)
	{
		sumOnes*=varValue;
	}
	for(i=0;i<degTwos;i++)
	{
		sumTwos*=varValue;
	}
	for(i=0;i<degThrees;i++)
	{
		sumThrees*=varValue;
	}
	sum=(sumOnes*coefOnes)+(sumTwos*coefTwos)+(sumThrees*coefThrees);
	return sum;
}
//part4
void derTerm(int coef , int deg , char x)
{
	int sum=coef*deg;
	printf("\npart4\n");
	printf("%d",sum);
	int i;
	for(i=0;i<deg;i++)
	{
		printf("*%c",x);
	}
	printf("\n");
}
//part5
void derTermUntilCons(int coef , int deg , char x)
{
	printf("\npart5\n");
	int counter=deg;
	int i,sum=coef;
	printf("%d",sum);// donguye ilk satiri sokamadim. 
	part5ForChar(counter,x);
	printf("\n");
	for(i=1;i<=deg;++i)
	{
		sum*=(counter);
		printf("%d",sum);
		counter--;
		//islemi yaitiktan sonran azaltmak gerekiyor yildiz cizimi icin
		part5ForChar(counter,x);
		printf("\n");
		
	}
}
void part5ForChar(int a,char x)// charýn girilecek dongusayisi ve ekrana basilmasi
{
	int i;
	for(i=0;i<a;i++)
	{
		printf("*%c",x);
	}	
}
