#include<stdio.h>
#include "lab5.h"
void MKMutfak()
{
    int ceppara=costemerMoney();
    //printf("\n%d",ceppara);
    int topKalori=0;int sec;
    FILE *menu,*indirim;
    menu_t menum;
    menu=fopen("menu.txt","r");
    indirim=fopen("discount.txt","r");
    menuDeger(&menum,menu);
    fclose(menu);
	fclose(indirim);
	//printf("make your choose!!");
	//scanf("%d",&sec);
    //ekranaBasma(menum,ceppara);
   // hesaplama(menum,&ceppara,&topKalori,sec);
    
	do
	{
		ekranaBasma(menum,ceppara,topKalori);
		printf("make your choose!!\n");
		scanf("%d",&sec);
		hesaplama(menum,&ceppara,&topKalori,sec);	
	}while(sec!=0);


}
int costemerMoney()//musterini cebindeki para
{
    int money;
    printf("cebinizdeki para degeri=");
    scanf("%d",&money);
    return money;
}
void menuDeger(menu_t *menum,FILE *file)//txt dosyayý menuye aktarmasý
{
    fscanf(file,"%d %d\n%d %d\n%d %d",&(*menum).soupCall,&(*menum).soup,&(*menum).cakeCall,&(*menum).cake,&(*menum).beefCall,&(*menum).beef);
}
void ekranaBasma(menu_t menum,int ceppara,int topKalori)
{
	printf("\n hangi yemegi istersiniz\n1)(%d)calori corba= %d lira\n2)(%d)calori et=%d lira\n3)(%d)calori kek=%d lira\n cebinizdeki para=%d\n toplam kalori=%d\n",menum.soupCall,menum.soup,menum.beefCall,menum.beef,menum.cakeCall,menum.cake,ceppara,topKalori);
}
void hesaplama(menu_t menum,int *ceppara,int *topKalori,int secim)
{
	if(secim==1)
	{
		if(*ceppara-(menum.soup>0))
		{
			*topKalori+=menum.soupCall;
			*ceppara-=menum.soup;
		}
		else
		{
			printf("paranýz yetmemektedir.");
		}
	}
	else if(secim==2)
	{
		if(*ceppara-menum.beef>0)
		{
			*topKalori+=menum.beefCall;
			*ceppara-=menum.beef;
		}
		else
		{
			printf("paranýz yetmemektedir.");
		}
	}
	else if(secim==3)
	{
		if(*ceppara-menum.cake>0)
		{
			*topKalori+=menum.cakeCall;
			*ceppara-=menum.cake;
		}
		else
		{
			printf("paranýz yetmemektedir.");
		}
	
	}
	else if(secim==0)
	{
		printf("afiyet olsun");
	}
	else
	{
		printf("yanlis giris yaptiniz");
	}

}

