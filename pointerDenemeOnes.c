#include<stdio.h>

int main()
{
	float *pArray;
	float a[]={1,5,7,9,5};
	pArray=&a;
	float *pSayi;
	float g=55;
	// psayı pointer adres tutar ve * ise adresteki değere erişmemize .
	pSayi=&g;
	// arrayın ilk elemanını bastırdı.
	printf("%f\n",*pArray);
	printf("%f",*pSayi);
	
	return (0);
}
