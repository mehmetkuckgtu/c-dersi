/****************************************************
*Kodu olu�turan: mehmet k���k
*bu kod bir haftada gunu gunune yap�lan 10 soruluk quiz 
*degerilerini ekrana bast�rm�st�r.
*diziler ve yeni veri tipleri olu�turma ve  kullanma �zerine
*al��t�rma yap�lm��t�r.
******************************************************/
#include<stdio.h>
#define NUM_QUEST 10//constant deger atanm�st�r.
#define NUM_CLASS_DAYS 5

int main()
{
	typedef enum//g�nleri olusturuldu.
	{monday, tuesday, wednesday, thursday, friday}
	class_days_t;
	char ansers[NUM_QUEST];
	char True='T';
	int score[NUM_CLASS_DAYS];
	int x,y,counter;
	class_days_t day;//class_days_t tipinin day degeri olusturuldu. 
	day=monday;
	printf("lutfen degerleri giriniz T yada F seklinde 50 deger giriniz\n");
	printf("NOT ENTERA BASMAYIN NOTLAR G�R�L�NCE BASIN :D\n");
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
