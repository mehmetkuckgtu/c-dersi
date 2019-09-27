/****************************************************
*Kodu olu�turan: mehmet k���k
*median filteri,mininmum filter,maximum filter
*algoritmasi olusturulmustur yani dizilerin 
*elemanlari siralamay�p  filreleri dondurur.
******************************************************/
#include<stdio.h>
#define size 11
void sort(int dizi[],int sizeDizi);
void swap(int *x,int *y);
int main()
{
	int i;
	int Array[size]={111,11,22,44,55,33,88,77,99,3,1};
	//1,3,11,22,33,44,55,77,88,99,111
	sort(Array,size);
	int median=Array[(int)(size/2)];
	int minimum=Array[size*0];
	int maximum=Array[size-1];
	printf("\nmedianFilter=%d\nminimumFilter=%d\nmaximumFilter=%d",median,minimum,maximum);
	for(i=0;i<size;++i)
	{
		printf("\n%d",Array[i]);
	}
	return 0;
}

void sort(int dizi[],int sizeDizi)//siralama
{
	int i;
	for(i=1;i<sizeDizi;i++)
	{
			
		if(dizi[i-1]>dizi[i])
		{
			swap(&dizi[i-1],&dizi[i]);
			i=0;//dizi i�inde tekrar donmesini sagliyor
			//bir yerine s�f�r koymam�z�n sebebi otomatik bir artt�r�yor
			//ve 11 hep ba�ta kal�yor.
			
		}

	}
	
}
void swap(int *x,int *y)//elemanlar�n yerini degistirdim
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
