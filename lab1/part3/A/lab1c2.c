#include<stdio.h>
int main()
{
	FILE *frp,*fwp;
	char buffer[100];
	char tBufferOne[100];
	int number,deger1,deger2,deger3;
	
	frp = fopen("input.txt", "r");
	fwp = fopen("output.txt", "w");
	fread(buffer, 100, 1, frp);//okuma
	sscanf(buffer, "%d", &number);//string  int dönüþtürme
	printf("%d",number);//debug
	deger1=number/100;
	deger2=(number%100)/10;
	deger3=(number%10);
	sprintf(tBufferOne,"deger1=%d\ndeger2=%d\ndeger3=%d",deger1,deger2,deger3);
	fprintf(fwp,"%s",tBufferOne);
	fclose(frp);
	fclose(fwp);
	return 0;
}
