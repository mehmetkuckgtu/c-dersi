/****************************************************
*Kodu oluþturan: mehmet küçük
*string in tanimlamalarýný ve kullanimi ile alakalý genel
*bir kod yazilmistir.
******************************************************/

#include<stdio.h>

int main()
{
	
	char s[69]="aliveli";//tanimlamasi burada dizimiz aslýnda 5 elemandan
	//oluþmakta son eleman her zaman null karakteridir.
	//s="alper" atayamayýz cunku o bir dizidir.
	//satir satir elemanlarýna ulasilmalidir.
	s[4]='M'; //diye atama yapilabilir amam boþluk karakterinden sonra
	// gelecegi için printfte okunmaz. Ama atanir. 
	//string bir dizi olacagindan output paramtresi olarak
	scanf("%s",s);// gonderilir.
	//input parametresi olarakta 
	printf("%s",s);//gonderilir.
	//eger string bir dizi olusturmak istersek 
	char stringDizi[4][3];// tanimlanir.
	//yani yukarda 4 elemanli string dizisi olusturduk.
	//strigimiz iki eleman almaktadir.
	// bu dizinin 2 string degerine erismek icin
	scanf("%s",stringDizi[2]);// ile ulasirim.
	//stringin dizi olusu asagidaki gibidir.
	char months[12][10] = {"January", "February", "March", "April", "June",
	"July", "August", "September", "October","November", "December"};	
	//aylari ekrana basmak istersek
	int i;
	for(i=0;i<12;++i)
	{
		printf("\n%s",months[i]);
	}
		
	return 0;
}
