#include<stdio.h>

int main()
{
	FILE *fwp;
	char buffer[100];
	int number,deger1,deger2,deger3;
	fwp = fopen("output.txt", "w");
	printf("3 basamakli deger girininiz");
	scanf("%d",&number);
	deger1=number/100;
	deger2=(number%100)/10;
	deger3=(number%10);
	sprintf(buffer,"deger1=%d\ndeger2=%d\ndeger3=%d",deger1,deger2,deger3);
	fprintf(fwp,"%s",buffer);
	fclose(fwp);
	printf("dosya olusturuldu.");

	return 0;
}
