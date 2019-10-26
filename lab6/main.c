/************************************************************
*kodu olusturan: Mehmet KUCUK
*lab 6
*************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#define sizeDizi 5

int main(int argc, char *argv[])
{

	//part1
    bool part1a=is_prime(7); printf("part1a=%i\n",part1a);
	int part1b=is_odd(22);   printf("part1b=%d\n",part1b);
	int part1c=is_even(22);  printf("part1c=%d\n",part1c);
	//part2
	const int  printDiziTamSayi[sizeDizi] ={1,2,3,4,5};
	const char printDiziKarakter[sizeDizi]={'A','B','C','D','E'};
	print_int_array(printDiziTamSayi,sizeDizi);
	print_char_array(printDiziKarakter,sizeDizi);
	//part3
	int part3Dizi[10]={0};
	assign_numbers_to_array(part3Dizi,10,is_prime);
    int i;
    printf("\npart3\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",part3Dizi[i]);
    }
	//part4
	printf("\npart4\n");
	const char part4C1[]={'*','_','*','*','*','-','_','*','*','_','-','*','_','*','-','*','*','-','*','-','*','*','*','*','*','-','*','*','*','*','-','*','*','_','-','*','*','-','_','-','*','*','*','*','*','-','*','*','*'};
	char part4C2[100];
	char ignored_char='*';
	int a;
	a=change_array(part4C1, part4C2, 49,ignored_char);
	for(i=0;i<49;i++)
	{
		printf("%c ",part4C1[i]);
	}
	printf("\n");
		for(i=0;i<a;i++)
	{
		printf("%c ",part4C2[i]);
	}
	//part5
	printf("\npart5\n");
	printf("%f",c());//return olarak sifiri dondurmekte part5 yapmadým 
	//sorunun nereden kaynaklandigini bilen arkadas bana geri donus yapabilir.
	//pek uzerine dusmedim. ödevi burada bitirdim.
	/*int bbb[10]={2,3,5,7,11,13,17,19,23,29};
	double mean;
    mean = compute_mean_of_array(bbb, 10);
	*/
	return 0;
}
