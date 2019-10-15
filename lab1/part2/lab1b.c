/*kodu oluşturan: Mehmet KÜÇÜK 
gtü bilgisayar muh. cse 102 dersi lab1 part 2 
*/
#include<stdio.h>

int main()
{
	int number,deger1,deger2,deger3;
	printf("3 haneli degeri giriniz\n");
	scanf("%d",&number);
	deger1=number/100;
	deger2=(number%100)/10;
	deger3=(number%10);
	printf("%d\n%d\n%d\n",deger1,deger2,deger3);
	return 0;
}
