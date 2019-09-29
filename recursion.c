/****************************************************
*Kodu oluþturan: mehmet küçük
*bu kod recursion tanilamalari ve calismasini anlamak 
*icin yapilmistir
******************************************************/
#include<stdio.h>

int toplam(int a,int b);
int main()
{
	//3*4 sonucu basacak 4 tane a'nin toplami
	int sum=0,a=3,b=4;
	sum=toplam(a,b);//init
	printf("%d",sum);
	return 0;
}
int toplam(int a,int b)
{
	int sonuc=0;
	printf("sum=%d",sonuc);
	printf("b=%d\n",b);
	//stakte 4 tane toplam fonksiyonu cagirildi.ve
	// sum degerine bir sey atanmadyukaridali printler anlamamiz icin
	if(b==0)
	{
		sonuc=0;//test
	}
	else
	{
		sonuc=a+toplam(a,b-1);//update 
	}
	//stackta olusan herbir toplam icin bir sonuc dondurur.
	printf("sonuc=%d\n",sonuc);
	return sonuc;
}

