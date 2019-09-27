/****************************************************
*Kodu oluþturan: mehmet küçük
*bu kod bir haftada gunu gunune yapýlan 10 soruluk quiz 
*degerilerini ekrana bastýrmýstýr.
*diziler ve yeni veri tipleri oluþturma ve  kullanma üzerine
*alýþtýrma yapýlmýþtýr.
******************************************************/
#include<stdio.h>
#define NUM_QUEST 10//constant deger atanmýstýr.
#define NUM_CLASS_DAYS 5

int main()
{
	typedef enum//günleri olusturuldu.
	{monday, tuesday, wednesday, thursday, friday}
	class_days_t;
	char ansers[NUM_QUEST];
	char True='T';
	int score[NUM_CLASS_DAYS];
	int x,y,counter;
	class_days_t day;//class_days_t tipinin day degeri olusturuldu. 
	day=monday;
	printf("lutfen degerleri giriniz T yada F seklinde 50 deger giriniz\n");
	printf("NOT ENTERA BASMAYIN NOTLAR GÝRÝLÝNCE BASIN :D\n");
	//karakterlerin tek seferde ve dogru girilmesi gerekiyor.
	for(day=0;day<NUM_CLASS_DAYS;++day)
	{
		counter=0;
		for(x=0;x<NUM_QUEST;x++)
		{	
			//deger klavyeden girilecek
			scanf("%c",&ansers[x]);
		}
		for(x=0;x<NUM_QUEST;++x)
		{
			if(ansers[x]==True)
			{
				//sayim yapildi
				++counter;
			}
		}
		//sayim score atandi
		score[day]=counter;
	}
	//ekrana basilmasi.
	for(day=monday;day<NUM_CLASS_DAYS;day++)
	{
		if(day==monday)
		{
			printf("\n pazartesi gunu quiz dogrulari= %d",score[day]);
		}
		else if(day==tuesday)
		{
			printf("\n sali gunu quiz dogrulari= %d",score[day]);
		}
		else if(day==wednesday)
		{
			printf("\n carsamba gunu quiz dogrulari= %d",score[day]);
		}
		else if(day==thursday)
		{
			printf("\n persembe gunu quiz dogrulari= %d",score[day]);
		}
		else if(day==friday)
		{
			printf("\n cuma gunu quiz dogrulari= %d",score[day]);
		}
	}
	
	return 0;
}
