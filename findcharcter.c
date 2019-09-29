/****************************************************
*Kodu oluþturan: mehmet küçük
*bu kod recursion tanilamalari ve string yapisini 
*calismasini anlamak icin yapilmistir.
*string degerin icinde kactane E oldugunu sayan kod
******************************************************/
#include<stdio.h>

int numOcc(char *str,char c);
int main()
{
	int sayE=0;
	char stringValue[20]={"MEHMET KUCUKEE"};
	sayE=numOcc(stringValue,'E');//init
	printf("%d",sayE);
	return 0;
}
int numOcc(char *str,char c)
{
	int say;
	if(str[0]=='\0')//test
	{
		say=0;
	}
	else
	{
		//burada yapilan bir sonraki adresi gönderip E olup olmamasýna bakmak 
		say=numOcc(&str[1],'E');//update
		if(str[0]=='E')
		{
			++say;
		}
	}
	return say;
}
