/****************************************************
*Kodu oluþturan: mehmet küçük
*strucuter yapisinin tanimlamalarýný ve kullanimi ile alakalý genel
*bir kod yazilmistir.
******************************************************/
#include<stdio.h>
#include<string.h>
/*
farklý tiplerin bir araya gelerek birseyin ozelliklerini olusturdugu yer
enum gibi cagrilmadigi zaman hafizada yer kaplamamaktadir. asagida bilgisayarin 
belli ozellikleri bir arada tutucak yapi olusmustur.
*/
typedef struct
{
	int day;
	int month;
	int year;
}date_t;

typedef struct
{
	char make [20];
	float c_rate;
	int m_size;
	date_t pdate;
}comp_t;

void printCom(comp_t a);//fonksiyona 
comp_t scanCom(void);
void outParam(comp_t *b);
int main()
{
	comp_t myCom,yourCom,heCom;// olusam yeni tipin degiskenleri tanimlanmistir.
	comp_t mehmet[20];// int gibi comp_t tipinde X elemanli dizi tanimlanabilir.
	myCom.m_size=2;//atama islemi yapýldý.
	printf("%d",myCom.m_size);
	strcpy(myCom.make,"aynen");//string degeri karakter dizisine yaziyor.
	printf("%s",myCom.make);//yapinin icindeki stringin icine atama yapildi.
	scanf("%f",&(myCom.c_rate));//myCom.c_rate float'i bir degisken gibi düsün.
	//ve myCom.c_rate bir output degiskeni. adresi parantez icine almamiz gerekli
	//islem onceliginden oturu.	
	
	printf("%f\n",myCom.c_rate);
	printCom(myCom);//yapiyi komple input parametre olarak kullandik
	yourCom=scanCom();//yapiyi baþka bir yapiya kopyakladik
	printCom(yourCom);//yapiyi komple input parametre olarak kullandik
	myCom.pdate.year=2019;//burada yapi icinde yapi cagirilir.
	mehmet[1].pdate.day=4;//dizinin elemanina deger atarim.
	//iki tipi karsilastirma yapamiyoruz.
	heCom.pdate.day=6;
	outParam(&heCom);//output parametre cagirim
	printf("%s",heCom.make);
	return 0;
}
void printCom(comp_t a)
//uc intput parametresi yerine bir struckter degerini gonderdim 
{
	printf("%s,%.2f,%d\n",a.make,a.c_rate,a.m_size);
}
comp_t scanCom(void)
{
	comp_t a;
	strcpy(a.make,"tamam");
	scanf("%f",&a.c_rate);
	scanf("%d",&a.m_size);
	return a; // comp_t degeri return yapti ONEMLI !!!!!!!!!!!!!
}
void outParam(comp_t *b)//output parametreleri kullanilan yer.
{
	//arrow operator (*b).make, &(*b).c_rate yerine b->make, &b->c_rate gibide kullanabiliriz.
	scanf("%s%lf%d%d%d",(*b).make, &(*b).c_rate,&(*b).m_size,&(*b).pdate.month,&(*b).pdate.year);	
}
