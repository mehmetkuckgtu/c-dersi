#include<stdio.h>


int main()
{
	char firstChar='a';
	char secondChar=44; 
	printf("%c\n",firstChar);//ascide a denk geliyor  
	printf("%c\n",secondChar);//ascide , denk geliyor 
	printf("%c\n",33);//ascide ' denk geliyor  
	printf("%c\n",(char)(35)); //ascide e denk geliyor  
	//hoca (char) (33) yazmam�z�n daha mant�kl� oldu�unu otomatik type  
	//�evirmede hata olabilece�ini s�yledi.
	//if(firstChar!=(char)33)
	//if((int)firstChar!=33)
	if(firstChar!=33) 
	// uc kar��lasmada sonu� ayn� ama type de�i�imini kendimizin yapmas�na alismak lazim!!!
	{
		printf("karsilastirma yapilabiliyor\n");
	}
	
	return 0;

}
