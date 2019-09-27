/****************************************************
*Kodu olu�turan: mehmet k���k
*bu kod dizileri anlatmaktad�r.
*dizilerin kukllan�m� ile alakal�
*al��t�rmalar yap�lm��t�r.
******************************************************/
#define elemanSayi 8 // bir dizi tanimlanirken kac elemanl�
// oldu�u de�ismez bir say� ile olusturulur.
//array�n haf�zada kapladigi alan degizmez. 
// eleman sayisi cons makro olmasi gerekir.
#include<stdio.h>
#include<math.h>

int main()
{
	double arr[elemanSayi]={16.0,12.0,6.0,8.0,2.5,12.0,14.0,-54.5};//compiler time deger
	//bu tip diziler static dizi
	//dizi tanimlarken dizinin tipi, adi, eleman say�s� girilmesi girilmesi zorunludur.
	// yada elemanlar� girilince eleman sayisini girmek zorunda de�iliz.
	double arrV2[100]={0};//soldaki yap�lan islem dizi elemanlerin hepsine
	//0 degerini atiyor.
	//x[10] elemanli bir sayiya x[10]=6; yapilamamali.
	//range disinda  baska degerleri degistirir.
	//x[i-2],x[i*2] yap�labilir. ancak range i�i olmak zorunda
	//x[x[i]] yap�labilir.ancak range i�i olmak zorunda
	//dizi elemanla�n� output ve input parametreleri olarak gonderilebilir.
	//dizinin tum elemanlarini fonksiyona parametre olarak gonderilebilir.
	//dizinin ilk adresi diziyi temsil eder.
	double sum=5;// run time deger
	arr[2]=12.20;// de�er atayabiliriz.
	sum+=arr[6];//sum ile dizi elam�n�n� toplayabiliriz.
	printf("\n deger sum= %f",sum); //deger okuyabiliriz.
	arr[1]=13.0+arr[0];// dizinin herhangi elamanina herhangi bir
	//elemani ile bir sayiyi topluyarak atama yapabiliriz. 
	arr[7]=pow(arr[0],arr[2]);//bir fonksiyona deger olarak gonderebiliriz.
	int i=0;
	//dizilerin en buyuk avantas� dongu icinde kullan�lmas� ile
	//her elemana ulas�labilir.ve degistirilebilir.
	for (i=0;i<elemanSayi;i++)
	{
		printf("\n deger arr[%d]= %f",i,arr[i]);
	}
	return 0;
}
