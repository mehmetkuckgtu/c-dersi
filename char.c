#include<stdio.h>


int main()
{
	char firstChar='a';
	char secondChar=44; 
	printf("%c\n",firstChar);//ascide a denk geliyor  
	printf("%c\n",secondChar);//ascide , denk geliyor 
	printf("%c\n",33);//ascide ' denk geliyor  
	printf("%c\n",(char)(35)); //ascide e denk geliyor  
	//hoca (char) (33) yazmamýzýn daha mantýklý olduðunu otomatik type  
	//çevirmede hata olabileceðini söyledi.
	//if(firstChar!=(char)33)
	//if((int)firstChar!=33)
	if(firstChar!=33) 
	// uc karþýlasmada sonuç ayný ama type deðiþimini kendimizin yapmasýna alismak lazim!!!
	{
		printf("karsilastirma yapilabiliyor\n");
	}
	
	return 0;

}
