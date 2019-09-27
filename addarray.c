/****************************************************
*Kodu oluþturan: mehmet küçük
*dizilerin output input parametre olarak tanimlanmasini
*gösteren kod
******************************************************/
#include<stdio.h>
#define size 5
void addArray(const int t[]//input parametre
,const int b[]//input parametre
,int c[]//output parametre,
,int sizeDizi);//input parametre
int main()
{
	const int x[size]={1,2,4,6,7};
	const int y[size]={21,32,54,12,3};
	int z[size];
	addArray(x,y,z,size);//z output parametre
	int i;
	for(i=0;i<size;++i)
	{
		printf("\ndizinin %d elemani=%d",i,z[i]);	
	}
}

void addArray(const int t[]//input parametre
,const int b[]//input parametre
,int c[]//output parametre,
,int sizeDizi)//input parametre
{
	int i;
	for(i=0;i<sizeDizi;++i)
	{
		c[i]=t[i]+b[i];	
	}
	
}
