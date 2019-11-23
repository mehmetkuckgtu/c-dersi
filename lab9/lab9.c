#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include "lab9.h"
void labDokuz()
{
	printf("************* part 1 ****************\n");
	char names[MAX_ROW][MAX_COL];
	char locations[MAX_ROW][MAX_COL];
	char nameLocations[MAX_COL];
	
	int namesSize         =read_list("Names.txt",names);
	int locationSize      =read_list("Locations.txt",locations);
	int nameLocationsSize =read_list("NamesLocations.txt",nameLocations);
	
	print_list(names,namesSize);
	print_list(locations,locationSize);
	print_list(nameLocations,nameLocationsSize);
	printf("\n************* part 2 ****************\n");
	whoLivesInTheCity("Ankara\n",names,locations,nameLocations);
	printf("\n************* part 3 ****************\n");
	
	printf("first occurance: deneme, e: %d\n", findFirst("deneme", 'e'));
	printf("first occurance: deneme, a: %d\n", findFirst("deneme", 'a'));

	printf("last occurance: deneme, e: %d\n", findLast("deneme", 'e'));
	printf("last occurance: deneme, a: %d\n", findLast("deneme", 'a'));
	printf("\n************* part 4 ****************\n");
	printf("f(5, 4) = %d\n", f(5, 4));
	char* surnames[MAX_ROW];
	
	get_ptr_arr(names, namesSize, surnames);
	print_list(names, namesSize);
	printf("\n");
	print_ptr_arr(surnames, namesSize);
	modify_ptr_arr(surnames, namesSize, 2, "Degirmen");
	printf("\nPointer Array Modified \n");
	print_list(names, namesSize);
	printf("\n");
	print_ptr_arr(surnames, namesSize);
}

/*
*dosyadan verileri okuma
*/
int read_list(const char *file_name//txt dosyasy input parametre
,char str_array[][MAX_COL])//dosyadaki verileri yazilacak yer input parametre
{
    FILE *tempFile;
    int i;
    i=0;
    tempFile=fopen(file_name,"r");
    if(tempFile==NULL)
        printf("File Could Not Be Opened!!");
    else
    {
        while(fgets(str_array[i],MAX_COL,tempFile)!=NULL)//dosyaya deger
        {
            i++;
        }
    }
    fclose(tempFile);
    return i;
}
/*
*degeri ekrana basma
*/
void print_list(char str_array[][MAX_COL], int size)
{
	int i;
    for(i=0;i<size;i++)
    {
        printf("%s\n",str_array[i]);
    }
}
/*
*o sehirde yasayan insanlarý ekrana bastýrcagýz 
*/
void whoLivesInTheCity(char city[]//girilen deger
,char names[][MAX_COL]
,char locations[][MAX_COL]
,char nameLocations[])
{
	int i,s;
	for(i=0;i<MAX_COL;++i)
	{
		s=strcmp(locations[i],city);
		if(s==0)
		{
			if(i==0)
			{
				printf("%s",names[0]);
				printf("%s",names[3]);
			}
			else if(i==1)
			{
				printf("%s",names[2]);	
			}
			else if(i==2)
			{
				printf("%s",names[1]);
				printf("%s",names[4]);
			}
		}
	}
}
/*
* kelimenin icinde harf ariyoruz ve 
* return -1 ise yok degil ise ilk bulunan sirasi
*/
int findFirst(const char str[], char ch)
{
	int i,foo,temp=0;
	int count=-1;
	/*
	*burada benim anlamadýðým bir durum olustu for i de siniri MAX_ROW
	*yapinca main icindeki printf (satir 23)deneme yazisindan sonra str stringi 
	* first occurance a yi yakaladi. bende boyle bir cozum buldum.
	*bunu okuyan arkadas sorunu biliyorsan bana ulas
	*/
	for(foo=0;foo<MAX_ROW;++foo)
	{
		if(str[foo]=='\000')
		{
			break;
		}
		temp++;	
	}
	for(i=0;i<temp && count ==-1 ;++i)
	{
		if(str[i]==ch)
		{
			count=i;
		}	
	}
	return count;
}
/*
* kelimenin icinde harf ariyoruz ve 
* return -1 ise yok degil ise son bulunan sirasi
*/
int findLast(const char str[], char ch)
{
	int i,foo,temp=0;
	int count=-1;
	for(foo=0;foo<MAX_ROW;++foo)
	{
		if(str[foo]=='\000')
		{
			break;
		}
		temp++;	
	}
	for(i=0;i<temp;++i)
	{
		if(str[i]==ch)
		{
			count=i;
		}
	}
	return count;
}
/*
*Recursion ile fonksiyonu calistirdik.
*/
int f(int x, int y)
{
	int sum;
	if((x<1) || (y<1))
	{
		sum=0;
	}
	else
	{
		sum=f(x, y-1) + f(x-1, y) + x + y;
	}
	
	return sum;
}
/*
*bonus
*/
int get_ptr_arr(char sentences[][MAX_COL], int row_c, char* ptr_arr[])
{
	int i;
	int j = 0;

	for(i=0; i<row_c; ++i){
		j = findFirst(sentences[i], ' ');
		ptr_arr[i] = &sentences[i][j+1];
	}

	return row_c;
}

void print_ptr_arr(char* ptr_arr[], int row_c)
{
	if(row_c == 0)
		return;

	printf("%s\n", ptr_arr[0]);
	print_ptr_arr(&ptr_arr[1], row_c -1);

}

void modify_ptr_arr(char* ptr_arr[], int row_c, int index, char new_word[])
{
	strcpy(ptr_arr[index], new_word);
}
