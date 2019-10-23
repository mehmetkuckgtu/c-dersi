#include<stdio.h>
#ifndef lab5
#define lab5
typedef struct//menu paketimiz
{
    int cake;
    int cakeCall;
    int beef;
    int beefCall;
    int soupCall;
    int soup;
}menu_t;
void MKMutfak();
int costemerMoney();
void menuDeger(menu_t *menum,FILE *file);
void ekranaBasma(menu_t menum,int ceppara,int topKalori);
void hesaplama(menu_t menum,int *ceppara,int *topKalori,int secim);
#endif

