/****************************************************
*Kodu olu�turan: mehmet k���k
*dizilerin dizinin icinde eleman aramayi
*g�steren kod
******************************************************/
#include<stdio.h>
#define size 8
int search(const char searchArray[],int searchSize,char c);

int main()
{
	char searchDizi[size]={'A','B','D','C','A','E','F','G'};
	//hoca burada A n�n indexsini bulurkan 0 degerini dondormesini istedi.
	printf("\nA nin index degeri=%d ",search(searchDizi,size,'A'));
	return 0;
}

int 
search(
const char searchArray[] //input parametre dizi
,int searchSize// input parametre dizinin boyutu
,char c//aran�lan karakter
)
{
	int index=-1, i;
	
	for(i=0;i<searchSize;++i)
	{
		if(index==-1)
		{		
		//hocan�n istedigi degeri dondurmek icin 
		//fordan �ikmak i�in break yerine mantiksal deger
		//ile halledilmesini �nerdi. �NEML�!!!
			if((searchArray[i]==c) )

			{
				index= i;
				// burada i ye n i atarsak doguden cikmis olur. ama hoca fordan 
				//ne yapmak istedigini gormek istiyor.
			}
			else
			{
				index=-1;
			}
		/*
		hoca bura breaks�z olarak ilk for(i=0;(i<searchSize) && (index==-1);++i)
		ile for dongusunden cikti.
		ikincisi  forun i�indeki kosulu forun icine yaz�p 
		for(i=0;(i<searchSize) && (searchArray[i]!=c));++i);
			if(i==n)
			{i=-1}
		
		return i; ile sonucu cikardi.		*/
		}


	}
	return index;
}
