#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include "lab8.h"
void labSekiz()
{
	printf("*************** part 1 **********************\n");
	int birthdaysSize,namesSize;
	char names[NUM_NAMES][STR_SIZE];
	char birthdays[NUM_NAMES][STR_SIZE];
	char month[STR_SIZE];
	namesSize=read_list("name_list.txt",names);
    birthdaysSize=read_list("birthdays.txt",birthdays);
	if(namesSize!=birthdaysSize)
	{
	    printf("There is Something Wrong; Check Your Lists!!\n");
	}
	else
	{
		print_list(names,namesSize);
		printf("\n\n");
		print_list(birthdays,birthdaysSize);
		printf("\n*************** part 2 **********************\n");
        sort_names(names,birthdays,namesSize);
        print_list(names,namesSize);
        printf("\n");
        print_list(birthdays,namesSize);
        printf("\n*************** part 3 **********************\n");
        int i;
		for(i=0;i<namesSize;i++)
        {
            uppercase_str(names[i]);
        }
        printf("\n");
        print_list(names,namesSize);
        printf("\n*************** part 4 **********************\n");
        most_used(birthdays,namesSize,month);
        printf("\nMost Used Month Is %s\n",month);
	}
	
}
/*
*dosyadan verileri okuma
*/
int read_list(const char *file_name//txt dosyasý input parametre
,char str_array[][STR_SIZE])//dosyadaki verileri yazilacak yer input parametre
{
    FILE *tempFile;
    int i;
    i=0;
    tempFile=fopen(file_name,"r");
    if(tempFile==NULL)
        printf("File Could Not Be Opened!!");
    else
    {
        while(fgets(str_array[i],STR_SIZE,tempFile)!=NULL)//dosyaya deger
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
void print_list(char str_array[][STR_SIZE], int size)
{
	int i;
    for(i=0;i<size;i++)
    {
        printf("%s\n",str_array[i]);
    }
}
/*
*siralama koduz ile karþilaþtirma yaparak yerleri degismistir.
*/
void sort_names(char names[][STR_SIZE],char birthdays[][STR_SIZE],int n)
{
    int i,j;
    char temp[STR_SIZE];
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
/*strcmp
if Return value < 0 then it indicates str1 is less than str2.

if Return value > 0 then it indicates str2 is less than str1.

if Return value = 0 then it indicates str1 is equal to str2.
*/        	
            if(strcmp(names[i],names[j])>0)
            {
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
                
                strcpy(temp,birthdays[i]);
                strcpy(birthdays[i],birthdays[j]);
                strcpy(birthdays[j],temp);
            }
        }
    }
}
/*
*toupper fonskiyonu ile soyadi ve adlari ilk kelimelerini buyutme
*/
void uppercase_str(char *str)
{
    int i;
    i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
            str[i+1]=toupper(str[i+1]);
        else
            str[0]=toupper(str[0]);
        i++;
    }
}
/*
*burada en fazla ay bulma islemini karsilastirma yaparak bulunmustur.
*/
void most_used(const char birthdays[][STR_SIZE],int n,char month[])
{
    int i,j,day,year,count,max;
    char temp[STR_SIZE],candidate[STR_SIZE];
    max=0;
    for(i=0;i<n;i++)
    {
        sscanf(birthdays[i],"%d %s %d",&day,candidate,&year);
        for(j=i+1;j<n;j++)
        {
            sscanf(birthdays[j],"%d %s %d",&day,temp,&year);
            if(strcmp(candidate,temp)==0)
                count++;
        }
        if(max<count)
        {
            max=count;
            strcpy(month,candidate);
        }
        count=0;
    }
}
