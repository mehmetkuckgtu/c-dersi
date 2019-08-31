#include<stdio.h>
//sayilarin degerlerini degiþtirmeye yariyan kod
void swap(int *x, int *y);

int main()
{

    int firstValuep,secondValuep;

    //degerleri klavyeden aldýk
    printf("firstValuep deger\n");
    scanf("%d",&firstValuep);
    printf("\nsecondValuep deger\n");
    scanf("%d",&secondValuep);
    // hem output hemde input parametresi olduklarý için adresini göndermemiz gerek 
    swap(&firstValuep,&secondValuep);
    printf("firstValuep=%d\n",firstValuep);
    printf("secondValuep=%d\n",secondValuep);



    return 0;
}
/*
 * firstValuep,secondValuep hem input hem output parametresidir.
 * degerler degistirilmistir.
*/
void swap(int *firstValuep, int *secondValuep)
{
    int temp;
    temp=*secondValuep;
    *secondValuep=*firstValuep;
    *firstValuep=temp;

}
