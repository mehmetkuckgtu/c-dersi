/****************************************************
*Kodu oluþturan: mehmet küçük
*bu kod iki boyutlu dizilerin kullanimini anlamak 
*icin yapilmistir.
******************************************************/
#include<stdio.h>
int main()
{
	/*tanimlama 4 ve 5 yazdidigimiz yer cont deger.
	bir boyutlu dizi ler gibi iki boyutlu diziyi
	kullaniriz. hocanin kullanimi ile ilk satýr
	sonra sutun tanimlanir.asagida 3 satýr 2 sutun bulunmakta.
	*/
	int dizi[3][2]={{1,2},{3,4},{5,6}};
	int i,j;
	for (i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n%d,%d =%d",i,j,dizi[i][j]);
			//iki boyutlu dongunun for ile dongusu
			//cok boyutlu diziler de iki boyutlu gibi
			//tanimlamalar vb aynidir.
		}
	}
	return 0;
}
